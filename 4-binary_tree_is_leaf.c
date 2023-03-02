#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to check
 * Return: true if it's a node or false otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && (node->left != NULL || node->right != NULL))
		return (0);
	return (1);
}
