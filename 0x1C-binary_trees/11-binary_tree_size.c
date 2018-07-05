#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;
	size_t size = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size += (left + right + 1);
	return (size);
}
