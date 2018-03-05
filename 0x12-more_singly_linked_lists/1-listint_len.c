#include "lists.h"

/**
 * listint_len - find number of elements of a linked listint_t
 * @h: linked list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t numElements = 0;

	while (h != NULL)
	{
		numElements++;
		h = h->next;
	}
	return (numElements);
}
