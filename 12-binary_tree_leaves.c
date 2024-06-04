#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 *
 * Return: The number of leaves in the tree, or 0 if tree is NULL.
 *
 * Description: A NULL pointer is not a leaf.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (size);

	leaves_count(tree, &size);
	return (size);
}

/**
 * leaves_count - Recursively counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves
 * @size: A pointer to the size counter to update
 *
 * Description: This helper function traverses the tree in a
 *              depth-first manner (pre-order traversal), and
 *              increments the size counter each time a leaf
 *              node (a node with no children) is encountered.
 *              It is called by the binary_tree_leaves function
 *              to perform the actual leaf count.
 */
void leaves_count(const binary_tree_t *tree, size_t *size)
{
	if (tree == NULL)
		return;

	leaves_count(tree->left, size);
	leaves_count(tree->right, size);

	if (!(tree->left || tree->right))
		*size += 1;
}
