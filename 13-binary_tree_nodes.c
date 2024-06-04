#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least 1 child, or 0 if tree is NULL.
 *
 * Description: A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (size);

	node_count(tree, &size);
	return (size);
}

/**
 * node_count - Recursively counts the non-leaf nodes in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 * @size: A pointer to the size counter to update
 *
 * Description: This helper function traverses the tree in a
 *              depth-first manner (pre-order traversal), and
 *              increments the size counter each time a non-leaf
 *              node (a node with at least one child) is encountered.
 *              It can be called by a function designed to count
 *              the non-leaf nodes in a binary tree.
 */
void node_count(const binary_tree_t *tree, size_t *size)
{
	if (tree == NULL)
		return;

	node_count(tree->left, size);
	node_count(tree->right, size);

	if (tree->left || tree->right)
		*size += 1;
}
