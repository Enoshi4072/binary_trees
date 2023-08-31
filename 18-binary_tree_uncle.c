#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree
 * @node: A pointer to the node to find the uncle for
 *
 * Return: A pointer to the uncle node,
 * or NULL if node is NULL or has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
<<<<<<< HEAD
	binary_tree_t *g_parent;

	g_parent = node->parent->parent;
	if (node == NULL || node->parent == NULL || g_parent == NULL)
		return (NULL);
	if (g_parent->left == node->parent)
		return (g_parent->right);
	return (g_parent->left);
=======
        binary_tree_t *g_parent;

        g_parent = node->parent->parent;
        if (node == NULL || node->parent == NULL || g_parent == NULL)
                return (NULL);
        if (g_parent->left == node->parent)
                return (g_parent->right);
        return (g_parent->left);
>>>>>>> 231891135679720eaa8291e82a253748f86dbb89
}
