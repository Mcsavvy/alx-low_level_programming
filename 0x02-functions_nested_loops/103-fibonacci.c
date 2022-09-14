#include <stdio.h>

/**
 * main - entry point
 * Print the sum of all even numbers in  a fibonacci sequence that do not
 * exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{

	long f = 1; /* initially the f[irst] number in the sequence */
	long s = 2; /* initially the s[econd] number in the sequence */
	int nfib = 32; /* the number of fibonacci number to generate */
	unsigned long int totalsum = 0;
	int cntr; /* counter (for the loop)*/
	long next; /* this would hold the next fibonacci number */;

	totalsum += s; /* skip f because 1 is not even */
	for (cntr = 2; cntr < nfib; cntr++)
	{
		/* next now hold the next number in the sequence */
		next = f + s;
		/* set f[irst] to the value of s[econd] */
		f = s;
		/* set s[econd] to the value of next */
		s = next;
		if (next % 2 == 0) /* test if next is even */
			totalsum += next;
	}
	printf("%ld\n", totalsum);
	return (0);
}
