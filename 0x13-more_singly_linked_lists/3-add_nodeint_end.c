#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * get_tail - gets the tail of a linked list
 *
 * @head: the head of the list
 *
 * Return: the last node in the list
 */
node *get_tail(node *head)
{
	node *next;

	if (head == NULL)
		return (head);
	next = get_tail(head->next);
	if (next == NULL)
		return (head);
	return (next);
}

/**
 * add_nodeint_end - creates a new node and adds it to the end of the
 *		list
 *
 * @head: head of the list
 * @n: an integer
 *
 * Return: an address to the new element, or NULL if it failed
 */
node *add_nodeint_end(node **head, const int n)
{
	node *new;

	new = malloc(sizeof(node));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
		get_tail(*head)->next = new;
	return (new);
}
