#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of array
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	if (size > 0)
	{
		hashTable = malloc(sizeof(hash_table_t) * size);
		if (hashTable == NULL)
			return (NULL);
		hashTable->size = size;
		hashTable->array = malloc(sizeof(hash_node_t) * size);
		if (hashTable->array == NULL)
		{
			free(hashTable);
			return (NULL);
		}
		return (hashTable);
	}
	return (NULL);
}
