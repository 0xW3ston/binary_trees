#include "binary_trees.h"
/**
 * binary_tree_sibling -  function
 * that create sibling in a binary tree
 * @node: PTR argument
 *
 * Dscription: A perfect binary tree is a tree in which all internally
 * nodes have two children and all leafs are at the same niveau.
 *
 * Return: PTR to the newest sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
