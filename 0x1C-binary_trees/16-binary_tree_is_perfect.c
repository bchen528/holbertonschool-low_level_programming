#include "binary_trees.h"

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
 * power - calculate base/exponent expression
 *
 * @base: base number
 * @exp: exponent
 * Return: resulting calculation
 */
size_t power(size_t base, size_t exp)
{
	size_t result = 1;

	while (exp != 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 on true, 0 on false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, test_num_leaves, real_num_leaves;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	test_num_leaves = power(2, height);
	real_num_leaves = binary_tree_leaves(tree);

	if (test_num_leaves == real_num_leaves)
		return (1);
	return (0);
}
