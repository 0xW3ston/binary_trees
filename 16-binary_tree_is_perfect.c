#include "binary_trees.h"

/**
 * binary_tree_height - function that
 * creates a binary tree node.
 *
 * @tree: PTR argument
 *
 * Return: Pointer to the new node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (right > left)
		return (right);
	else
		return (left);
}
/**
 * binary_tree_balance - balance function
 *
 * @tree: PTR Arugment
 *
 * Return: ptr return or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	return (left - right);
}
/**
 * binary_tree_is_perfect -  checks if binary tree is perfect
 *
 * @tree: PTR Argument
 *
 * Dscription: a perfect binary tree is a tree in which all internal
 * nodes have two children and all leafs are at the same niveau
 *
 * Return: PTR to new node or NULL in case of failure.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (binary_tree_balance(tree) == 0)
	{

		if (!tree->left && !tree->right)
		{
			return (1);
		}
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
