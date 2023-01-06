#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table to delete
 *
 * Return: nothing!
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	ulong i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
