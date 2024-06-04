#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;
	
	size = 0;
	if (tree == NULL)
		return (size);
	
	tree_size(tree, &size);
	return (size);
}

/**
 * tree_size - Recursively calculates the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 * @size: A pointer to the size counter to update
 *
 * Description: This helper function traverses the tree in a 
 *              depth-first manner (pre-order traversal), 
 *              incrementing the size counter for each node 
 *              encountered. It is called by the binary_tree_size 
 *              function to perform the actual size calculation.
 */
void tree_size(const binary_tree_t *tree, size_t *size)
{
	if (tree == NULL)
		return;
	
	tree_size(tree->left, size);
	tree_size(tree->right, size);
	*size += 1;
}
