#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp = NULL;

	if (!first || !second)
		return (NULL);
	if (!first->parent || !second->parent)
		return (first->parent);

	while (first->parent)
	{
		temp = second;
		while (temp->parent)
		{
			if (first == temp->parent)
				return (temp->parent);
			if (temp == first->parent)
				return (first->parent);
			if (first->parent == temp->parent)
				return (first->parent);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (first->parent);
}
