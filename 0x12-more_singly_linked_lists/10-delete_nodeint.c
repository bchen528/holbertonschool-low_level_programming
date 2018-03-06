#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index
 * of a listint_t linked list
 * @head: linked list
 * @index: index of node that should be deleted
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp2;
	unsigned int count = 0;

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
	free(temp);
	return (1);
}
