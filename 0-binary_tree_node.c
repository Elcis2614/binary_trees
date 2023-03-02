#include "binary_trees.h"
/**
 *binary_tree_node - creates a binary tree node
 *@parent: the pointer to the parent node
 *@value: the value to be inserted
 *Return: a pointer to the newly created node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *) malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->left = new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}
