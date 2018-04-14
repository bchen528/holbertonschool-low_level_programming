#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: start of linked list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	if (count == idx)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	temp = *h;

	while (count < idx - 1)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;
	if (new->next != NULL)
		(new->next)->prev = new;

	return (new);
}
