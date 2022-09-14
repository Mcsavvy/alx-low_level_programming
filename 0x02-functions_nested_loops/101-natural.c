#include <stdio.h>
/**
 * ismultiple - checks if a number is a multiple of another number
 *
 * @a int: a number
 * @b int: another number
 * Return: 1 if `a` is a multiple of `b` otherwise 0
 */
int ismultiple(int a, int b)
{
	return ((a % b) == 0 ? 1 : 0);
}

/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int max = 1024 - 1; /* 1024 should be excluded */
	int min = 1;
	int totalsum = 0;
	int i; /* to keep track of our loop */

	for (i = min; i <= max; i++)
		if (ismultiple(i, 3) || ismultiple(i, 5))
			totalsum += i;

	printf("%d\n", totalsum);
	return (0);
}
