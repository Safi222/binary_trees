#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 *  Return: The number of nodes with at least 1 child, or 0 if tree is NULL.
 *  Description: If tree is NULL, function returns 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int stat;

	stat = 0;
	if (tree == NULL)
		return (0);

	check_tree_stat(tree, &stat);

	if (stat == 0)
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
