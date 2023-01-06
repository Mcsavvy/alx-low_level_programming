#include "hash_tables.h"

/**
 * key_index - computes and returns the key of a given index
 *
 * @key: the key
 *
 * @size: the size of the hash table
 *
 * Return: the index in the hash table where this key corresponds to
 */
ulong key_index(const unsigned char *key, ulong size)
{
	ulong hash;

	hash = hash_djb2(key);
	return (hash % size);
}
