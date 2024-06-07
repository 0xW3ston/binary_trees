#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts right binary tree node
 * @parent: PTR
 * @value: VALUE
 *
 * Return: PTR
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = parent->right;
	if (parent->right)
	{
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
