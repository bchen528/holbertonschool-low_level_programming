#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node
 * Return: pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->parent->left);
	else if (node->parent->right == node)
		return (node->parent->parent->right);
	else
		return (NULL);
}
