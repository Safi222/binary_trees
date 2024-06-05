#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree as a size_t value.
 *         If tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);

	return (height - 1);
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
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (0);

	left_depth = tree_height(tree->left);
	right_depth = tree_height(tree->right);

	if (left_depth > right_depth)
		return (left_depth +  1);
	else
		return (right_depth + 1);
}
