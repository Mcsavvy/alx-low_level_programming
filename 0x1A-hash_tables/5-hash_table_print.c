#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 *
 * Return: nothing!
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	ulong i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
