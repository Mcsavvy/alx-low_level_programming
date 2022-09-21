#include "main.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: array on integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int middleman;
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		/* use middleman to secure a[first]'s value */
		middleman = a[first];
		/* replace a[first] with  a[last] */
		a[first] = a[last];
		/* replace a[last] with a[first]'s previous value */
		a[last] = middleman;
		first++; /* increase first */
		last--; /* decrease last */
	}
}
