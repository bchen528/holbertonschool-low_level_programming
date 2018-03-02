#include "lists.h"

/**
 * add_node_end - add new node at end of a list_t list
 * @head: start of linked list
 * @str: new string
 * Return: address of new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
/*assign next to NULL and str(data) to duplicated str*/


	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
