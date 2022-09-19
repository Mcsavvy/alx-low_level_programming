#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string to print
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int length;

	/* get length of string */
	for (length = 0; str[length] != '\0'; length++)
		continue;
	if (length % 2 == 1)
		n = (length + 1) / 2;
	else
		n = length / 2;
	for (; n < length; n++)
		_putchar(str[n]);
	_putchar('\n');
}
