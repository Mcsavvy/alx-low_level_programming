#include "lists.h"
#include <stdlib.h>
#define node listint_t


/**
 * get_size - returns the number of elements in a linked list
 * @h: head of the list
 * Return: number of elements in the list
 */
size_t get_size(const listint_t *h)
{
	if (h == (void *)0)
		return (0);
	return (1 + get_size(h->next));
}

/**
 * get_node - returns the node at a particular index
 *			in the list
 * @head: the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: node at that index, else NULL
 */
node *get_node(node *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_node(head->next, index - 1));
}

/**
 * insert_nodeint_at_index - inserts a node at a given index
 *
 * @head: the start of the list
 * @idx: the idx at which the new node should be inserted
 * @n: an integer
 *
 * Return: the new element, or NULL if it failed
 */
node *insert_nodeint_at_index1(node **head, unsigned int idx, int n)
{
	node *prev, *temp, *new;

	if (idx > get_size(*head))
		return (NULL);
	if (idx == 0)
	{
		temp = *head;
		prev = NULL;
	}
	else
	{
		prev = get_node(*head, idx - 1);
		temp = prev->next;
	}
	new = malloc(sizeof(node));
	if (new == NULL)
		return (NULL);
	new->n = n;
	prev->next = new;
	new->next = temp;
	return (new);
}

node *insert_nodeint_at_index(node **head, unsigned int idx, int n)
{
	unsigned int i;
	node *temp, *new;

	temp = *head;

	if (idx == 0)
	{
		new = malloc(sizeof(node));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new = malloc(sizeof(node));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}

