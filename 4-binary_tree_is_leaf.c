#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is leaf in binary tree
 * @node: PTR to Node
 * Return: 1 if the node is leaf, else 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
		return (1);

	return ((1 - 1));
}
