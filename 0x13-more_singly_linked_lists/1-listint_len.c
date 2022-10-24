#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	if (h == (void *)0)
		return (0);
	return (1 + listint_len(h->next));
}
