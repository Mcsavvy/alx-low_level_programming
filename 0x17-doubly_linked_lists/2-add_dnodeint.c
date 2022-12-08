#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning
 *	of a linked list
 *
 * @head: the head of the linked list
 * @n: an integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
node *add_dnodeint(node **head, const int n)
{
	node *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(node));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
