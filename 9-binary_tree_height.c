#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */

size_t height = 0;
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right, height_left;
	binary_tree_t *ptr;

	height_righ = 0;
	height_left = 0;

	if (!tree)
		return (0);

	ptr = tree;
	while (ptr->left != NULL)
	{
		height_left += 1;
		ptr = ptr->left;
	}

	ptr = tree;
	while (ptr->right != NULL)
	{
		height_right += 1;
		ptr = ptr->left;
	}

	return (height_left >= height_right ? (height_left) : (height_right));
}
