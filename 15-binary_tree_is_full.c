#include "binary_trees.h"
/**
 * binary_tree_is_full - function that
 * Checks if a binary tree is full
 *
 * @tree: PTR
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 1;

	if (!tree)
	{
		return (0);
	}
	if ((tree->right && tree->left) || (!tree->right && !tree->left))
	{
		flag *= 1;
	}
	else
	{
		flag *= 0;
	}

	if (tree->right)
	{
		flag *= binary_tree_is_full(tree->right);
	}

	if (tree->left)
	{
		flag *= binary_tree_is_full(tree->left);
	}

	return (flag);
}
