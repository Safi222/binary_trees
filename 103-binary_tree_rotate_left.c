#include "binary_trees.h"


/**
 * binary_tree_rotate_left - This function performs
 * a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node of the tree once rotated.
 * Description: This function performs
 *		a left-rotation on a binary tree
 *		by setting new parent that is a right
 *		child of the tree and move it's tree
 *		to the original tree and set the
 *		parent of the org tree to be parent
 *		of new parent.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *n_parent;

	if (!(tree || tree->left))
		return (NULL);

	/*Set the new parent for the tree that is right of the tree*/
	n_parent = tree->right;

	tree->right = n_parent->left;
	if (n_parent->left)
		n_parent->left->parent = tree;

	n_parent->parent = tree->parent;
	n_parent->left = tree;

	/*Update the parent of the current tree to new root*/
	tree->parent = n_parent;
	return (n_parent);
}
