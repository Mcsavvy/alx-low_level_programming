#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * node_at_index - returns the node at an index in a list
 *
 * @list: a linked list
 * @index: the index at which to get the node
 *
 * Return: A pointer to the node at @index in @list
 */
listint_t *node_at_index(listint_t *list, size_t index)
{
	listint_t *head = list;

	while (head)
	{
		if (head->index == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

/**
 * jump_search - searches for a node in a sorted list of integers using
 * the jump search algorithm.
 *
 * @list: a linked list of integers
 * @size: the size of the list
 * @value: the value to search for
 *
 * Return: a pointer to the node where @value is located or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t blcksize = sqrt(size), low = 0, high = 0;
	listint_t *target;

	if (!list || !size)
		return (NULL);

	high = blcksize;
	target = node_at_index(list, high);

	while (high < size && target->n < value)
	{
		printf("Value checked array[%lu] = [%i]\n", high, target->n);
		low = high;
		high += blcksize;
		target = node_at_index(list, high);
	}

	high = MIN(high, size - 1);
	target = node_at_index(list, high);
	printf("Value checked array[%lu] = [%i]\n", high, target->n);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	target = node_at_index(list, low);
	for (; low < high && target->n < value; low++)
	{
		printf("Value checked array[%lu] = [%i]\n", low, target->n);
		target = node_at_index(list, low + 1);
	}
	printf("Value checked array[%lu] = [%i]\n", low, target->n);

	if (target->n == value)
		return (target);
	return (NULL);
}
