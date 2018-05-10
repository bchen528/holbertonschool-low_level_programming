#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int j = 0;
	hash_node_t *nonempty = NULL;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

/*check for last non-NULL index*/
	j = (ht->size) - 1;

	while (j != 0)
	{
		nonempty = ht->array[j];
		if (nonempty != NULL)
			break;
		j--;
	}

/*print hashtable*/
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp != nonempty)
				printf(", ");
			temp = temp->next;
		}
		i++;
	}
	printf("}");
	printf("\n");
}
