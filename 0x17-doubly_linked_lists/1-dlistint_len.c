#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a linked
 *		list
 * @h: the head of the list
 * Return: the length of the linked list
 */
size_t dlistint_len(const node *h)
{
	const node *head;
	size_t length;

	head = h;

	if (!head)
		return (0);

	/* get the head of the list */
	while (head->prev)
		head = head->prev;
	/* go through the list now from the head */
	length = 1;
	while (head->next)
	{
		head = head->next;
		length++;
	}
	return (length);
}
