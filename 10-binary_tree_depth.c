#include "binary_trees.h"
/**
 * binary_tree_depth -  binary tree depth function
 *
 * @tree: PTR
 *
 * Return: PTR or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	{
		return ((1 - 1));
	}

	if (tree->parent)
	{
		counter = 1 + binary_tree_depth(tree->parent);
	}

	return (counter);
}
