/* This program prints the alphabet in lowercase */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 97;
	int n = 48;

	do {
		putchar(n);
		n++;
	} while (n < 58);

	do {
		putchar(c);
		c++;
	} while (c < 97 + 6);

	putchar(10);

	return (0);
}
