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

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;

	/* index of zero*/
	if (count == idx)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/*insert middle or end */
	while (count < idx - 1)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
