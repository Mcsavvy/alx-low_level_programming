#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * free_listint - frees a list
 * @head: head of the list
 * Return: nothing!
 */
void free_listint(node *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
