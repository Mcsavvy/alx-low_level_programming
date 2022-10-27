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
node *find_loop(const node *head)
{
	node *slow, *fast;

	if (!(head) || !(head->next))
		return (NULL);
	slow = head->next;
	fast = slow->next;

	if (fast == head)
		return (fast);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			fast = head->next;
			slow = slow->next;
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
 * print_listint_safe - prints all nodes in a linked list
 * @head: the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const node *head)
{
	node *mark;
	size_t size = 0;
	char seen = 0;

	mark = find_loop(head);
	if (head == NULL)
		return (size);

	while (head != NULL)
	{
		if (head == mark)
		{
			if (seen)
				break;
			seen = 1;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		size++;
	}
	if (mark != NULL)
		printf("-> [%p] %d\n", (void *)mark, mark->n);
	return (size);
}
