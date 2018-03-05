#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: start of linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int value;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_node;
	return (value);
}
