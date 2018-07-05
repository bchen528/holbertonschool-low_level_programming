#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node
 * Return: balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;
	int balance = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (!tree->left)
		left--;
	if (!tree->right)
		right--;
	balance = left - right;
	return (balance);
}

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: pointer to root node
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
