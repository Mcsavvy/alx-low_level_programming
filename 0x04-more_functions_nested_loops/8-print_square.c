#include "main.h"

/**
 * print_square - print a square using `#`s followed by a new line.
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int length, breadth;

	for (length = size; length > 0; length--)
	{
		for (breadth = size; breadth > 0; breadth--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
