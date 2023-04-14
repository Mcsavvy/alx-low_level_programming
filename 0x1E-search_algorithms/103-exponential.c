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
 * exponential_search - finds an element in an array using exponential search
 *
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index where @value was found or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t hi, lo = 0, mid;

	if (!(array && size))
		return (-1);

	for (hi = 1; hi < size && array[hi] < value; hi *= 2)
	{
		printf("Value checked array[%lu] = [%i]\n", hi, array[hi]);
		lo = hi;
	}
	hi = MIN(hi, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);

	while (lo <= hi)
	{
		printf("Searching in array: ");
		print_array(&array[lo], (hi - lo) + 1);
		mid = (double)((lo + hi) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return (-1);
}
