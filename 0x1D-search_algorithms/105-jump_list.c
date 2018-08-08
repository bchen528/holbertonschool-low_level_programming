#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm
 *
 * @list: a pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: return a pointer to the first node where value is located OR NULL
 * if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size, i;
	listint_t *temp = NULL;

	if (list == NULL)
		return (NULL);

	/*find jump size*/
	jump_size = sqrt(size);

	temp = list;
	i = 0;
	while (temp != NULL && i < jump_size)
	{
		temp = temp->next;
		i++;
	}
	/*find jump block containing target value*/
	while (temp != NULL && temp->n < value)
	{
		printf("Value checked at index [%d] = [%d]\n",
		       (int)temp->index, temp->n);
		if (temp->n == value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)(temp->index - jump_size),
			       (int)temp->index);

			return (temp);
		}

		else if (temp->next == NULL)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)(temp->index - jump_size + 1),
			       (int)temp->index);
			return (jumplist_linear_search(list, temp->index + 2,
						       size, jump_size, value));
		}

		for (i = 0; temp->next != NULL && i < jump_size; i++)
			temp = temp->next;
	}

	/*perform linear search in block*/
	if (temp->index >= size || temp->n >= value)
	{
		printf("Value checked at index [%d] = [%d]\n",
		       (int)temp->index, temp->n);
		printf("Value found between indexes [%d] and [%d]\n",
		       (int)(temp->index - jump_size), (int)temp->index);
		return (jumplist_linear_search(list, temp->index + 1, size,
					       jump_size, value));
	}
	return (NULL);
}

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 *
 * @list: a pointer to the first element of the array to search in
 * @start: index of upper end of jump block + 1
 * @size: number of elements in array from breakpoint
 * @jump_size: window size when interating through array
 * @value: value to search for
 * Return:  first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */


listint_t *jumplist_linear_search(listint_t *list, size_t start, size_t size,
				  size_t jump_size, int value)
{
	size_t i;
	listint_t *temp = NULL;

	if (list == NULL)
		return (NULL);

	temp = list;
	for (i = 0; temp != NULL && i < start - jump_size - 1; i++)
		temp = temp->next;

	for (i = start - jump_size - 1; temp != NULL && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n",
		       (int)temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
