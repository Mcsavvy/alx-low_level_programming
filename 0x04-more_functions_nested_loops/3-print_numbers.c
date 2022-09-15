#include "main.h"

/**
 * print_numbers - prints out numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
