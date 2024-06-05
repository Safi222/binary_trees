#include "binary_trees.h"

/**
 * binary_tree_insert_left -  A function that inserts a node as the
 * left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (!parent)
		return (NULL);

	/* allocate the node in memory */
	left_node = malloc(sizeof(binary_tree_t));

	/*check for NULL cases*/
	if (!left_node)
		return (NULL);

	/* intializing a binary tree node */
	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;

	/* Check if the parent node has a left child already */
	if (parent->left)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
