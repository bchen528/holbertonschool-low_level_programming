#include "lists.h"

/**
 * free_list - a list_t list
 * @head: start of list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
