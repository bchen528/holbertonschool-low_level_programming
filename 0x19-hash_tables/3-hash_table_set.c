#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	const unsigned char *tmp_key = (const unsigned char *)(key);
	int index = key_index(tmp_key, ht->size);

	if (ht == NULL)
		return (0);

	if (value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

/*collision*/
	if (ht->array[index] != NULL)
		new->next = ht->array[index];

/*no collision*/
	ht->array[index] = new;
	return (1);
}
