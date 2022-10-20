#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 *
 * @head: the head of the linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->str != NULL)
		free(head->str);
	free_list(head->next);
	free(head);
}
