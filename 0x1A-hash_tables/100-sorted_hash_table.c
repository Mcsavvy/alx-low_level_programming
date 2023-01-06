#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - create a hash table which can hold @size chains
 *
 * @size: the size of the array
 *
 * Return: a hash table.
 *	NULL is returned if malloc fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	ulong i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(size * sizeof(void *));
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * greater - compares @s1 and @s2 based on ascii value.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 1 if @s1 is greater to @s2, else 0
 */
int greater(const char *s1, const char *s2)
{
	int i = 0;

	while (1)
	{
		if (!s1[i])
			return (0);
		else if (!s2[i])
			return (1);
		else if (s1[i] > s2[i])
			return (1);
		else if (s2[i] > s1[i])
			return (0);
		i++;
	}
}

/**
 * shash_table_insert - insert an element into a sorted
 *	linked list in the hash table
 *
 * @ht: the hash_table to insert into
 *
 * @node: node to insert
 *
 * Return: nothing!
 */
void shash_table_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	if (greater(ht->shead->key, node->key))
	{
		node->snext = ht->shead;
		node->snext->sprev = node;
		ht->shead = node;
		return;
	}
	if (greater(node->key, ht->stail->key))
	{
		node->sprev = ht->stail;
		node->sprev->snext = node;
		ht->stail = node;
		return;
	}
	temp = ht->shead;
	while (temp)
	{
		if (greater(temp->key, node->key))
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			node->sprev->snext = node;
			temp->sprev = node;
			return;
		}
		temp = temp->snext;
	}
}


/**
 * shash_table_set - sets an element to the hash table
 *
 * @ht: the hash table you want to set the element on
 *
 * @key: the element's key
 *
 * @value: the element's value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *val;
	shash_node_t *temp;
	ulong index;

	if (!(ht && key))
		return (0);
	val = value ? strdup(value) : NULL;
	if (!val && value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = val;
			return (1);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(shash_node_t));
	if (!temp)
	{
		free(val);
		return (0);
	}
	temp->key = strdup(key);
	if (!temp->key)
	{
		free(temp);
		free(val);
		return (0);
	}
	temp->value = val;
	temp->next = ht->array[index];
	temp->snext = temp->sprev = NULL;
	ht->array[index] = temp;
	shash_table_insert(ht, temp);
	return (1);
}


/**
 * shash_table_get - retrieves the value associated with a key
 *
 * @ht: the hast table to search
 *
 * @key: the key we are looking for
 *
 * Return: the value associated with @key, or NULL if @key was not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	ulong index;
	shash_node_t *temp;

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


/**
 * shash_table_print_rev - prints a hash table in reverse order
 *
 * @ht: the hash table to print
 *
 * Return: nothing!
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	node = ht->stail;
	while (node)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->sprev;
	}
	printf("}\n");
}



/**
 * shash_table_print - prints a hash table
 *
 * @ht: the hash table to print
 *
 * Return: nothing!
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	node = ht->shead;
	while (node)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: the hash table to delete
 *
 * Return: nothing!
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;
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
