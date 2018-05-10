#include "hash_table.h"

/**
 * hash_djb2 - a really good string hash function, it has excellent
 * distribution and speed on many different sets of keys and table sizes
 *
 * @str: string to be hashed
 * Return: hash value (index)
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
