#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm.
 *
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, blcksize;

	if (!array || !size)
		return (-1);

	blcksize = sqrt(size);
	low = high = 0;

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", high, array[high]);
		low = high;
		high += blcksize;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	high = MIN(high, size - 1);
	for (; low < high && array[low] < value; low++)
	    printf("Value checked array[%lu] = [%i]\n", low, array[low]);
	printf("Value checked array[%lu] = [%i]\n", low, array[low]);

	if (array[low] == value)
	    return (low);
	return (-1);
}
