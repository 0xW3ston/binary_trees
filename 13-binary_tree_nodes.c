#include "binary_trees.h"
/**
 * binary_tree_nodes - functions that
 * counts nodes with at least 1 children in a binary tree
 *
 * @tree: PTR
 * Return: number of nodes with 1 childen or more
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->right || tree->left)
	{
		counter += 1;
	}
	counter += binary_tree_nodes(tree->right);
	counter += binary_tree_nodes(tree->left);
	return (counter);
}
