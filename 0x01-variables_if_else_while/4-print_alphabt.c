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

	while (c < 123)
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}

	putchar(10);

	return (0);
}
