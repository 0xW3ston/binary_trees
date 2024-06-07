#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - function that
 * measures the balance factor of a binary tree
 *
 * @tree: PTR
 *
 * Return: factor balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height, left_height, balance;

	if (!tree)
	{
		return (0);
	}

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	balance = left_height - right_height;

	return (balance);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, or 0 if @tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_count;
	size_t left_count;

	if (!tree)
	{
		return (0);
	}
	right_count = binary_tree_height(tree->right);
	left_count = binary_tree_height(tree->left);
	if (right_count > left_count)
	{
		return (right_count + 1);
	}
	return (left_count + 1);
}
