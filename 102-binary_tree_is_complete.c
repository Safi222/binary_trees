#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, otherwise 0
 *
 * Description: If tree is NULL, the function returns 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t index, node_sizes;

	if (!tree)
		return (0);

	index = 0;
	node_sizes = node_size(tree);

	return (binary_complete(tree, index, node_sizes));
}

/**
 * node_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree
 */
size_t node_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (node_size(tree->left) + node_size(tree->right) + 1);
}

/**
 * binary_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * @index: Current node index
 * @node_size: Number of nodes in the tree
 *
 * Return: 1 if the tree is complete, otherwise 0
 */
int binary_complete(const binary_tree_t *tree, size_t index, size_t node_size)
{
	if (!tree)
		return (1);

	if (index >= node_size)
		return (0);

	return (binary_complete(tree->left, 2 * index + 1, node_size) &&
			binary_complete(tree->right, 2 * index + 2, node_size));
}
