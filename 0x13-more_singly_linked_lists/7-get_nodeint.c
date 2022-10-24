#include "lists.h"
#define node listint_t

/**
 * get_nodeint_at_index - returns the node at a particular index
 *			in the list
 * @head: the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: node at that index, else NULL
 */
node *get_nodeint_at_index(node *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
