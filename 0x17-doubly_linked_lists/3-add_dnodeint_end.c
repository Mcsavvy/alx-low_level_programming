#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a
 *		linked list
 * @head: a pointer to the head of the list
 * @n: an integer
 * Return: the new node or NULL if it failed
 */
node *add_dnodeint_end(node **head, const int n)
{
	node *tail, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(node));
	if (!new)
		return (NULL);
	new->n = n;
	tail = *head;

	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}
	new->prev = tail;
	if (!*head)
		*head = new;
	return (new);
}
