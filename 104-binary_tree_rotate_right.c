#include "binary_trees.h"

/**
 * binary_tree_rotate_right - This function
 * performs a right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node of the tree once rotated.
 *
 * Description: This function performs
 *		a right-rotation on a binary tree
 *		by setting new parent that is a left
 *		child of the tree and move it's tree
 *		to the original tree and set the
 *		parent of the org tree to be parent
 *		of new parent.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *n_parent;

	if (!(tree || tree->left))
		return (NULL);

	/*Set the new parent for the tree that is left of the tree*/
	n_parent = tree->left;

	/*set the left subtree nodes to be the original tree children*/
	tree->left = n_parent->right;

	if (n_parent->right)
		n_parent->right->parent = tree;

	/*set the tree parent to be the parent of new parent */
	n_parent->parent = tree->parent;

	/*Update the parent of the current tree to new root*/
	n_parent->right = tree;
	tree->parent = n_parent;

	return (n_parent);
}
