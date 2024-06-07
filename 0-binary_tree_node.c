#include "binary_trees.h"
/**
 * binary_tree_node -  creates binary tree node
 * @parent: PTR
 * @value: VAL
 *
 * Return: PTR
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
	{
		return (NULL);	
	}
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
