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
		free(head->str);
		temp = head;
		free(temp);
		head = head->next;
	}
	free(head);
}
