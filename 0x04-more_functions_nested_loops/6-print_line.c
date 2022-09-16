#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character `_` would be printed
 *
 * Return: void
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
