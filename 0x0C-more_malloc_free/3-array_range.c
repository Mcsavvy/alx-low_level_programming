#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: start of range
 * @max: end of range (included)
 *
 * Return: an array of the integers
 */
int *array_range(int min, int max)
{
	unsigned int nmemb;
	int i;
	int *array;

	if (min > max)
		return (NULL);
	nmemb = max - min + 1;
	array = (int *)malloc(nmemb * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		array[i - min] = i;
	return (array);
}
