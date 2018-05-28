#include "sort.h"

/**
 * get_count - count number of nodes in DLL
 *
 * @h: doubly linked list
 * Return: number of nodes
 */

int get_count(listint_t *h)
{
	listint_t *runner = NULL;
	int numNodes = 0;

	if (h == NULL)
		return (0);

	runner = h;

	while (runner != NULL)
	{
		numNodes++;
		runner = runner->next;
	}
	return (numNodes);
}

/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *first = NULL;
	listint_t *second = NULL;
	listint_t *head = NULL;
	listint_t *last = NULL;
	int flag, g = 0;

	if (list == NULL || (*list) == NULL || get_count((*list)) < 2)
		return;

	head = *list;
	first = *list;
	last = *list;

	while (last->next != NULL)
		last = last->next;

	while (first != last)
	{
		second = first->next;
		/*check values before*/
		while (second->prev != NULL && (second->prev->n > second->n))
		{
			/*insert at beginning*/
			if (second->prev == head)
			{
				if (flag == 0)
				{
					second->next->prev = first;
					second->prev = NULL;
					first->next = second->next;
					first->prev = second;
					second->next = first;
					first = second;
					head = first;
					(*list) = head;
					flag = 1;
				}
				else
				{
					second->next->prev = head;
					second->prev = NULL;
					head->next = second->next;
					head->prev = second;
					second->next = head;
					head = second;
					(*list) = head;
					second = first;
				}
			}
			/*insert at end*/
			else if (second == last)
			{
				first->next = NULL;
				second->next = first;
				second->prev = first->prev;
				second->prev->next = second;
				first->prev = second;
				last = first;
			}

			/*insert at middle*/
			else
			{
				second->next->prev = second->prev;
				second->prev->next = second->next;
				second->prev->prev->next = second;
				second->prev = (second->next->prev)->prev;
				second->next = second->next->prev;
				second->next->prev = second;
				flag = 1;
			}
			print_list(*list);
		}
		/*keep moving til end of list*/
		if (first->next != NULL && first->n <= first->next->n)
			first = first->next;
	}
}
