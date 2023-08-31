#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal of a binary tree
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 *
 * The value in each node is passed as a parameter to the given function.
 * If tree or func is NULL, the function does nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
