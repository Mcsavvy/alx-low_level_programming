#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a linked list
 *
 * @head: the head of the linked list.
 *
 * Return: the sum of all the data in the linked list
 */
int sum_dlistint(node *head)
{
	node *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
