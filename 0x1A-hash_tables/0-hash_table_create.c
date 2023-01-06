#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table which can hold @size chains
 *
 * @size: the size of the array
 *
 * Returns: a hash table.
 *	NULL is returned if malloc fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(size * sizeof(void *));
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
