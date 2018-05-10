#include "hash_tables.h"

/**
 * key_index - finds index of a key
 *
 * @key: key to find index value for
 * @size: size of array of hash table
 * Return: index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
