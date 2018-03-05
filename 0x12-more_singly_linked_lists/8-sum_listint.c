#include "lists.h"

/**
 * sum_listint - find sum of all the data(n) of a
 * listint_t linked list
 * @head: linked list
 * Return: sum of all data of listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
