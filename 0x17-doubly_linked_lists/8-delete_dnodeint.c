#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 *
 * @head: a node in the list
 * @index: the index of the list where the new node should be added
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(node **head, unsigned int index)
{
	unsigned int i = 0;
	node *temp = *head;

	if (!head || !*head)
		return (-1);
	while (temp->prev)
		temp = temp->prev;
	for (i = 0; temp->next; i++)
	{
		if (i == index)
			break;
		temp = temp->next;
	}
	if (i != index)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;
	else
		*head = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
