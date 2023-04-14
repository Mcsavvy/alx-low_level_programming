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
 * advanced_binary - searches for a value in a list using the binary search
 * algorithm.
 *
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 *
 * Return: the index of the first @value was found or -1 if it wasn't found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, index;

	if (!(array && size))
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);
	mid = (size - 1) / 2;

	if (value == array[mid])
	{
		if ((mid > 0 && array[mid - 1] != value) || (mid == 0))
			return (mid);
		return (advanced_binary(array, size - (mid + 1), value));
	}
	else if (value < array[mid])
		return (advanced_binary(array, size - (mid + 2), value));

	index = advanced_binary(
		array + mid + 1, size - (mid + 1), value);
	if (index > -1)
		return ((mid + 1) + index);
	return (-1);
}
