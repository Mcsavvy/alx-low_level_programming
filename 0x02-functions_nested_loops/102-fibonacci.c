#include <stdio.h>

/**
 * main - entry point
 * prints out the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{

	unsigned long int f = 1; /* initially the f[irst] number in the sequence */
	unsigned long int s = 2; /* initially the s[econd] number in the sequence */
	int nfib = 50; /* the number of fibonacci number to generate */
	int cntr; /* counter (for the loop)*/
	unsigned long int next; /* this would hold the next fibonacci number */;

	printf("%ld, ", f);
	printf("%ld, ", s);
	for (cntr = 3; cntr < nfib; cntr++)
	{
		/* next now hold the next number in the sequence */
		next = f + s;
		/* set f[irst] to the value of s[econd] */
		f = s;
		/* set s[econd] to the value of next */
		s = next;
		printf("%ld, ", next);
	}
	printf("%ld\n", f + s);
	return (0);
}
