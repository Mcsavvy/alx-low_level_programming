#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(node **head, unsigned int index)
{
	unsigned int i;
	node *temp, *temp2;

	temp = *head;

	if (index == 0)
	{
		if (temp == NULL)
			return (-1);
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!(temp && temp->next))
			return (-1);
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp->next->next;
	free(temp2);
	return (1);
}
