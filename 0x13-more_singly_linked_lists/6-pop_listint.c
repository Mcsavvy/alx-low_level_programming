#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * pop_listint - deletests the head node of a list and
 *		return it's data
 *
 * @head: head of the list
 *
 * Return: an integer
 */
int pop_listint(node **head)
{
	node *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
