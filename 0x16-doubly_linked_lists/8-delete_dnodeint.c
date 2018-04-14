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
	dlistint_t *temp = 0;
	dlistint_t *temp2 = 0;
	unsigned int count = 0;

	if (*head == NULL || index <= 0)
		return (-1);

	temp = *head;

	if (count == index && temp != NULL)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (count < index && temp != NULL)
	{
		if (count == index - 1)
			temp2 = temp;
		count++;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	temp2->next = temp->next;
	(temp->next)->prev = temp2;
	free(temp);
	return (1);
}
