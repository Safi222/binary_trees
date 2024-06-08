#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order
 * traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Description: The value in the node must be passed as a parameter
 *              to this function. If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, count;

	if (!tree || !func)
		return;

	count = 1;
	height = tree_height(tree);

	while (count <= height)
	{
		print_tree_levelorder(tree, count, func);
		count++;
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

	if (!tree)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * print_tree_levelorder - Prints the nodes of a binary tree at a given level
 * @root: A pointer to the root node of the tree to print
 * @height: The level of the tree to print
 * @func: A pointer to a function to call for each node
 *
 * Description: This function prints the nodes at a specific level in the
 *              binary tree, using level-order traversal. It calls the
 *              provided function on the value of each node at the given
 *              level. If the root is NULL, the function does nothing.
 */
void print_tree_levelorder(const binary_tree_t *root,
		size_t height, void (*func)(int))
{
	if (root == NULL)
		return;

	if (height == 1)
		func(root->n);
	else
	{
		print_tree_levelorder(root->left, height - 1, func);
		print_tree_levelorder(root->right, height - 1, func);
	}
}
