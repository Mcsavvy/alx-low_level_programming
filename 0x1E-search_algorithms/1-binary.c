#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 *
 * @array: the array to print
 * @size: the size of the array
 *
 * Return: nothing!
 */
void print_array(int *array, size_t size)
{
	size_t i;

	if (!(array && size))
		return;

	for (i = 0; i < size - 1; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
}

/**
 * binary_search - helper function to perform binary search
 *
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index at which @vaoue was found or -1 if it wasn't found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	int mid_val, index;

	if (size == 0)
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);
	mid = (size - 1) / 2;
	mid_val = array[mid];

	if (value == mid_val)
		return (mid);
	else if (value < mid_val)
		return (binary_search(array, size - (mid + 2), value));
	index = binary_search(
		array + mid + 1, size - (mid + 1), value);
	if (index > -1)
		return ((mid + 1) + index);
	return (-1);
}
