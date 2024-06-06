#include "binary_trees.h"
#include <stdio.h>

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
	int height, leaves;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	leaves = count_leaves(tree) / 2;

	/* A perfect binary tree with height h has 2^h - 1 nodes */
	return (leaves == (1 << height) - 1);
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
 * count_leaves - Recursively counts the leaves of a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves in the binary tree.
 */
size_t count_leaves(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (!tree)
		return (0);
	
	count_left = count_leaves(tree->left) + 1;
	count_right = count_leaves(tree->right) + 1;

	return (count_left + count_right);
}
