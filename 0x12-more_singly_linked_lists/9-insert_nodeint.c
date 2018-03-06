#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list
 * @idx: index of list where new node should be added
 * @n: data value of new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int count = 0;
	listint_t *temp;
	listint_t *temp2;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;

	while (count < idx)
	{
		if (count == idx - 1)
			temp2 = temp;
		count++;
		temp = temp->next;

	}
	new_node->n = n;
	new_node->next = temp;
	temp2->next = new_node;

	return (new_node);
}
