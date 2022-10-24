#include "lists.h"
#include <stdlib.h>
#define node listint_t

/**
 * add_nodeint - created a new node and adds it to the beginning
 *		of a list
 *
 * @head: the start of the list
 * @n: an integer
 *
 * Return: address of the new element, or NULL if it failed
 */
node *add_nodeint(node **head, const int n)
{
	node *new;

	new = malloc(sizeof(node));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
