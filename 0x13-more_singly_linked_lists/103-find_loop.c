#include "lists.h"
#define node listint_t

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: head of the list
 *
 * Return: the address of the node where the loop starts, or NULL
 *	if there is no loop
 */
node *find_listint_loop(node *head)
{
	node *tortoise, *hare;

	tortoise = hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
		{
			hare = head;

			while (hare != tortoise)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
