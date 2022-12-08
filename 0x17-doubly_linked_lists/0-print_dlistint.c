#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 *		linked list
 * @h: the head of the list
 * Return: the length of the linked list
 */
size_t print_dlistint(const node *h)
{
	const node *head;
	size_t length;

	head = h;

	if (!head)
		return (0);

	/* get the head of the list */
	while (head->prev)
		head = head->prev;
	printf("%d\n", head->n);
	/* go through the list now from the head */
	length = 1;
	while (head->next)
	{
		head = head->next;
		printf("%d\n", head->n);
		length++;
	}
	return (length);
}
