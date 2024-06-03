#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node (at level 0)
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node0;

	node0 = malloc(sizeof(binary_tree_t));
	if (!node0)
		return (NULL);
	if (parent == NULL)
		return (NULL)
	
	node0->n = value;
	node0->parent = parent;
	node0->left = NULL;
	node0->right = NULL;

	return (node0);
}
