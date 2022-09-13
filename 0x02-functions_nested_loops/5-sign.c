#include "main.h"

/**
 * print_sign - print the sign of a number
 *  + if @n is greater that zero
 *  0 if @n is zero
 *  - if @n is less than zero
 * Return:
 *  1 if @n is greater than 0
 *  0 if @n is zero
 *  -1 if @n is less than zero
 *
 * @n: number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
