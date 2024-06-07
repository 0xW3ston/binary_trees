#include "binary_trees.h"
/**
 * binary_tree_delete -  deletes a binary tree node.
 * @tree: tree r
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
