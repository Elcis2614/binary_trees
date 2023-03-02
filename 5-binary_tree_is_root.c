#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is the root
 * @node: the node
 * Return: 1 if is and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		return (int)(node->parent == NULL);
	return (0);
}


