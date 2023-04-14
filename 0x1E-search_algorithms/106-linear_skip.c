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
skiplist_t *node_at_index(skiplist_t *list, size_t index)
{
	skiplist_t *head = list, *temp = NULL;

	if (index == 0)
		return (list);

	while (head && head->index < index)
	{
		temp = head;
		head = head->express;
		if (!head || head->index > index)
		{
			head = temp->next;
			while (head && head != temp)
			{
				if (head->index == index)
					return (head);
				head = head->next;
			}
			break;
		}
		else if (head->index == index)
			return (head);
	}
	return (NULL);
}

/**
 * linear_skip - searches for a node in a sorted skiplist of integers using
 * the jump search algorithm.
 *
 * @list: a linked list of integers
 * @value: the value to search for
 *
 * Return: a pointer to the node where @value is located or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t size, blcksize, low = 0, high = 0;
	skiplist_t *target, *temp = list;

	if (!list)
		return (NULL);

	while (temp->express)
		temp = temp->express;
	while (temp->next)
		temp = temp->next;
	size = temp->index + 1;
	blcksize = sqrt(size);

	high = blcksize;
	target = list->express;

	while (target && target->n < value)
	{
		printf("Value checked array[%lu] = [%i]\n", high, target->n);
		low = high;
		high += blcksize;
		target = target->express;
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
