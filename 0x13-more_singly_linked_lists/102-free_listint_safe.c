#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#define node listint_t

/**
 * find_loop - finds a loop in a list
 * @head: the head of the list
 * Return: the node where the loop begins, or NULL
 *		if there is no loop
 */
node *find_loop2(node *head)
{
	node *slow, *fast;

	if (!(head) || !(head->next))
		return (NULL);
	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			fast = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - prints all nodes in a linked list
 * @h: the head of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(node **h)
{
	node *mark, *temp, *head;
	size_t size, i;
	char seen = 0;

	if (h == NULL || *h == NULL)
		return (0);
	head = *h;
	mark = find_loop2(head);
	temp = head;

	for (size = 0; temp != NULL; size++)
	{
		if (temp == mark)
		{
			if (seen)
				break;
			seen = 1;
		}
		temp = temp->next;
	}
	for (i = 0; i < size; i++)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	*h = NULL;
	h = NULL;
	return (size);
}
