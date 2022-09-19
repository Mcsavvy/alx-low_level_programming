#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * followed by a new line.
 *
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n - 1; i++)
		printf("%d, ", a[i]);
	if (i == n - 1)
		printf("%d", a[i]);
	printf("\n");
}

