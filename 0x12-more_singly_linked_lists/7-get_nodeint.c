#include "lists.h"

/**
 * get_nodeint_at_index - find nth node of listint_t linked list
 * @head: start of linked list
 * @index: index of the node, starting at 0
 * Return: nth node of listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		count++;
		head = head->next;
	}
	return (head);
}
