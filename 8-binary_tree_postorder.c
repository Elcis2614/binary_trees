#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses the tre in post-order
 * @tree: the root
 * @func: function to print a single node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		funct(tree);
	}
}
