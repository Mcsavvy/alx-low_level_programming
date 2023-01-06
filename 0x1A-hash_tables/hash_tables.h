#ifndef HASH_TABLES_H
#define HASH_TABLES_H

typedef unsigned long int ulong;

/**
 * struct hash_node_s - Node of a hash tables
 *
 * @key: The key, a string
 *	This is always unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want out HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	ulong size;
	hash_node_t **array;
} hash_table_t;

/* prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
