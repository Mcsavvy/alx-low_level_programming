#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves the value associated with a key
 *
 * @ht: the hast table to search
 *
 * @key: the key we are looking for
 *
 * Return: the value associated with @key, or NULL if @key was not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	ulong index;
	hash_node_t *temp;

	if (!(ht && key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
