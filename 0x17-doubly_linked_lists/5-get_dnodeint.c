#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked
 *		list
 * @head: the address of the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the node if found, else NULL
 */
node *get_dnodeint_at_index(node *head, unsigned int index)
{
	unsigned int i;
	node *temp;

	if (!head)
		return (NULL);
	/* get the top of the list */
	temp = head;
	while (temp->prev)
		temp = temp->prev;
	/* get node at given index */
	for (i = 0; temp; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
