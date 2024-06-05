#include "binary_trees.h"

/**
 * binary_tree_insert_right -  A function that inserts a node as the
 * right-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	/* allocate the node in memory */
	right_node = malloc(sizeof(binary_tree_t));

	/*check for NULL cases*/
	if (!right_node)
		return (NULL);
	if (!parent)
		return (NULL);

	/* intializing a binary tree node */
	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = NULL;

	/* Check if the parent node has a left child already */
	if (parent->right)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}
	parent->right = right_node;

	return (right_node);
}
