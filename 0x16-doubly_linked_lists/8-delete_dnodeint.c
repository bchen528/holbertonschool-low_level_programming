#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: start of linked list
 * @index: index to node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	dlistint_t *previous = NULL;
	unsigned int count = 0;

	if (*head == NULL && head == NULL)
		return (-1);

	current = *head;

/*delete first node*/
	if (index == 0 && current != NULL)
	{
		*head = current->next;
		free(current);
		return (1);
	}
/*move to index position*/
	while (count < index && current != NULL)
	{
		if (count == index - 1)
			previous = current;
		count++;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

/*delete last node*/
	if (current->next == NULL)
	{
		current = current->prev;
		current->next = NULL;
		free(current);
		return (1);
	}
/*delete middle node*/
	previous->next = current->next;
	(current->next)->prev = previous;
	free(current);
	return (1);
}
