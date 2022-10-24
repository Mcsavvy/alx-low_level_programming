#include "lists.h"
#define node listint_t

/**
 * sum_listint - returns the sum of all the data in the list
 * @head: head of function
 * Return: sum of all data
 */
int sum_listint(node *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
