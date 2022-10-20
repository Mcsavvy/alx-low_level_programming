#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_tail - traverses a linked list to get the last node
 *
 * @node: a pointer to a node in the list
 *
 * Return: the last node if any, else NULL
 */
list_t *get_tail(list_t *node)
{
	list_t *next;

	if (node == NULL)
		return (NULL);
	next = get_tail(node->next);
	if (next == NULL)
		return (node);
	return (next);
}

/**
 * add_node_end - adds a node to the end of a linked list
 *
 * @head: a pointer to a pointer to the head of the list 🙃
 *
 * @str: a string
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *node, *tail;

	if (str == NULL)
		i = 0;
	else
		for (i = 0; str[i]; i++)
			continue;
	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = (str == NULL) ? NULL : strdup(str);
	node->len = i;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tail = get_tail(*head);
		tail->next = node;
	}
	return (node);
}
