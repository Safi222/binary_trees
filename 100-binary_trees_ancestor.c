#include "binary_trees.h"


/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * recursively.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node as a size_t value.
 *	   If tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	/*check for NULL tree*/
	if (tree == NULL)
		return (0);

	/*count the levels that represent depth*/
	depth = 0;

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}



/**
 * binary_tree_ancestor - A function that finds the lowest
 * common ancestor of two nodes.
 * @first : A pointer to the first node.
 * @second : A pointer to the second node.
 *
 * Return : common ancestor of two nodes.
 *
 * Description : This function finds the lowest common ancestor of two nodes
		 by matching the levels of two nodes and then find their common
		 parent to be the ancestor using depth function
		 If no common ancestor was found , this function returns NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	/*check for NULL cases */
	if (first == NULL || second == NULL)
		return (NULL);

	depth = binary_tree_depth(root);
	size_t f_depth = depth(first);
	size_t s_depth = depth(second);

	/*compare node levels and if different match the levels*/
	while (f_depth > s_depth)
	{
		first = first->parent;
		f_depth--;
	}

	while (s_depth > f_depth)
	{
		second = second->parent;
		s_depth--;
	}

	/*find the ansector of the two nodes*/
	if (first == second)
		return ((binary_tree_t *)second);

	while (first && second && !(first == second))
	{
		first = first->parent;
		second = second->parent;
	}

	/*return ansector*/
	return (binary_trees_ancestor(first, second));
}