#include "hash_tables.h"

/**
 * key_index - Computes the index for a given key in a hash table.
 * @key: The key string.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Compute the hash value using hash_djb2 */
	hash_value = hash_djb2(key);

	/* Compute the index using the hash value and table size */
	return (hash_value % size);
}

