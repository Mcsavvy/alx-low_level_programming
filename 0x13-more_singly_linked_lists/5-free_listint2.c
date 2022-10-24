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
	node *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
	head = NULL;
}
