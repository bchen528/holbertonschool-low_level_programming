#include "lists.h"

/**
 * list_len - find number of elements in linked list_t list
 * @h: string to be assessed
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
