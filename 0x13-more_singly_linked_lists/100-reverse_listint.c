#include "lists.h"
#define node listint_t

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 * Return: pointer to the first node of the reversed list
 */
node *reverse_listint(node **head)
{
	node *prev, *curr, *next;

	prev = NULL;
	curr = *head;
	next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (prev);
}
