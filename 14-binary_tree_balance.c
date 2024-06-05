#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = 0;
	right_height = 0;

	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;

	return (left_height - right_height);
}
