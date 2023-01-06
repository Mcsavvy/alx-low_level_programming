#include <stdio.h>
#include "hash_tables.h"

void print_hash_table(hash_table_t *ht)
{
	ulong i;
	hash_node_t *temp;

	if (!ht)
	{
		printf("(null)\n");
		return;
	}
	printf("{\n");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (!temp)
			continue;
		printf("\tchain-%lu = ", i);
		while (temp)
		{
			printf("[%s: %s]->", temp->key, temp->value);
			temp = temp->next;
		}
		printf("NULL\n");
	}
	printf("}\n");
}
