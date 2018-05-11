#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	hash_node_t *deleteMe = NULL;

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			deleteMe = temp;
			free(temp->value);
			free(temp->key);
			free(temp);
			temp = deleteMe->next;
		}
		free(temp);
		i++;
	}
	free(ht->array);
	free(ht);
}
