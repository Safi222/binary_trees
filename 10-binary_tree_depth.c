#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * recursively.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node as a size_t value.
 *         If tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
