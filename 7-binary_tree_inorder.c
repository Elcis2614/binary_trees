#include "binary_treees.h"
/**
 * binary_tree_inorder - traverses the tree in order
 * @tree: the root
 * @func: the function to print a node value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
