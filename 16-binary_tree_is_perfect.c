#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 *
 * Description: If tree is NULL, the function returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int stat, height;

	stat = 0;
	if (tree == NULL)
		return (0);

	/* check if tree is root */
	if (tree->parent != NULL)
		return (0);

	check_tree_stat(tree, &stat);
	height = tree_height(tree->left) - tree_height(tree->right);

	if (stat == 0 && height == 0)
		return (1);

	return (0);
}

/**
 * check_tree_stat - Recursively checks the fullness of a binary tree
 * @tree: A pointer to the root node of the tree to check
 * @stat: A pointer to the status counter to update
 *
 * Description: This helper function traverses the tree in a depth-first
 *              manner (pre-order traversal). It increments the status
 *              counter if it encounters a node with only one child,
 *              indicating that the tree is not full.
 */
void check_tree_stat(const binary_tree_t *tree, int *stat)
{
	if (tree == NULL)
		return;

	check_tree_stat(tree->left, stat);
	check_tree_stat(tree->right, stat);

	/* check if tree is not leaf */
	if (tree->left || tree->right)
	{
		if ((!tree->left) || (!tree->right))
			*stat += 1;
	}
}

/**
 * tree_height - Computes the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree as a size_t value.
 *         If tree is NULL, returns 0.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
