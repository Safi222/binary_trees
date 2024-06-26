#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->left || !node->parent->right)
		return (NULL);
	return (node->n == node->parent->left->n ? node->parent->right :
			node->parent->left);
}
