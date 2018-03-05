#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: start of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
	free(head);
}
