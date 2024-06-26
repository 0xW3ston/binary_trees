#include "binary_trees.h"
/**
 * binary_tree_height -  Height function for binary tree
 *
 * @tree: PTR
 * Return: PTR or NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}

	if (right > left)
	{
		return (right);
	}
	else
	{
		return (left);
	}
}
