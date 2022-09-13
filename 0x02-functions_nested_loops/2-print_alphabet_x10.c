#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}

}
