#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: an array of integers
 * @size: size of the array
 * @cmp: function used to compare items in the array
 * Return: the index of the number if found, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
