#include "main.h"

/**
 * print_number - recursive print a number
 * digit by digit
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;

	if (num < 10)
	{
		_putchar('0' + num);
	} else
	{
		print_number(num / 10);
		_putchar('0' + (num % 10));
	}
}
