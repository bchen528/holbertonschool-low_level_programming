#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
