#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * Description: The value in the node must be passed as a parameter
 *              to this function. If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->left, &print_num);
	binary_tree_postorder(tree->right, &print_num);
	func(tree->n);
}
