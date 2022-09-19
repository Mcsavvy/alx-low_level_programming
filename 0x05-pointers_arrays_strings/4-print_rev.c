#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i; /* counter */

	/* get the length of *s */
	for (i = 0; s[i] != '\0'; i++)
		continue; /* do nothing */
	/* i would now be equals to the index of \0 */
	i -= 1;
	/* i now holds the last index */
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

