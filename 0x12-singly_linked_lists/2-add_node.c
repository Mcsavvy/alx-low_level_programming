#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a linked list
 *
 * @head: a pointer to a pointer to the head of the list 🙃
 *
 * @str: a string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *node;

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
	node->next = *head;
	*head = node;
	return (node);
}
