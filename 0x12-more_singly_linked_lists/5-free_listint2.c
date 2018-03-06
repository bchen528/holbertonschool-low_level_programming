#include "lists.h"

/**
 * free_listint2 - free listint_t list and set head to NULL
 * @head: start of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp = *head;
	temp2 = NULL;

	if (temp == NULL || head == NULL)
		return;

	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
