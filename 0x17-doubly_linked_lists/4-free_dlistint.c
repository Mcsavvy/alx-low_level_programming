#include "lists.h"

/**
 * free_dlistint - frees all nodes in a linked list
 *
 * @head: a pointer to the head of the linked list
 *
 * Return: nothing!
 */
void free_dlistint(node *head)
{
	node *tail, *temp;

	/* get the tail */
	tail = head;
	if (!tail)
		return;
	while (tail->next)
		tail = tail->next;
	temp = tail->prev;

	/* free the nodes in a backward stride */
	while (temp)
	{
		free(tail);
		tail = temp;
		temp = tail->prev;
	}
	free(tail);
}
