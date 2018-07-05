#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
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

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to root node
 * Return: 1 if the tree is full or 0 if tree is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_leaves - checks if a node is a leaf
 *
 * @tree: pointer to the root node
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 on true, 0 on false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);

	if (tree->left && tree->right)
	{
		if (binary_tree_leaves(tree->left) == height
		    && binary_tree_leaves(tree->right) == height)
			return (1);
	}
	return (0);
}
