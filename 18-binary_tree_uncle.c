#include "binary_trees.h"

/**
 * binary_tree_sibling -  fUNCTION that takes a sibling
 *
 * @node: PTR
 *
 * Dscription:A perfect binary tree is a tree in which all internal
 * nodes have two childs and all leafs are at the same level.
 *
 * Return: PTR or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

/**
 * binary_tree_uncle -  creates a binary tree uncle node.
 *
 * @node: PTR argument
 *
 * Dscription:A tree in which all internal
 * nodes have two childs and all leafs are at the same niveau.
 *
 * Return: PTR or NULL (in case of failure)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}
