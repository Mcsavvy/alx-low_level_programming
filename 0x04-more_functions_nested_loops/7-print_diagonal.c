#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character `\` should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int spaces = 0, spcs;
	int _n = n;

	for (; n > 0; n--)
	{
		for (spcs = 0; spcs < spaces; spcs++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		spaces++;
	}
	if (_n <= 0)
		_putchar('\n');
}
