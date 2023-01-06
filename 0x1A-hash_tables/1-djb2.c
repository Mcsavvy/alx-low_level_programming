#include "hash_tables.h"

/**
 * hash_djb2 - generates a hash for a string
 *
 * @str: target string
 *
 * Return: a computes hash of @str
 * NOTE: the hash for a two strings with the same content
 *	would always be the same
 */
ulong hash_djb2(const unsigned char *str)
{
	ulong hash;
	int c;

	hash = 5381;
	for (c = *str++; c; c = *str++)
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
