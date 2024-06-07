#include "binary_trees.h"
/**
 * binary_tree_postorder -  post orders a node in a tree
 * @tree: PTR
 * @func: func PTR
 *
 * Return: PTR
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
