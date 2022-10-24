#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * free_listint2 - frees a list
 * @head: head of the list
 * Return: nothing!
 */
void free_listint2(node **head)
{
	if (*head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
