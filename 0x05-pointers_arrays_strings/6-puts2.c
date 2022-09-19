#include "main.h"

/**
 * puts2 - print every other character in a string
 * @s: the string to print
 * Return: void
 */
void puts2(char *s)
{
	int i;
	int n = 0; /* next index to print */

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i != n)
			continue;
		_putchar(s[i]);
		n = i + 2;
	}
	_putchar('\n');
}

