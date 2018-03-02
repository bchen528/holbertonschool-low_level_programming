#include "lists.h"
/**
 * _strlen - calculate the string length
 * @s: string to be assessed
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * print_list - prints all elements of a list_t list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0; /* number of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		n++;
	}
	return (n);
}
