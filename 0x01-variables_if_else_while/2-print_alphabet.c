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

	do {
		putchar(c);
		c++;
	} while (c < 123);

	putchar(10);

	return (0);
}
