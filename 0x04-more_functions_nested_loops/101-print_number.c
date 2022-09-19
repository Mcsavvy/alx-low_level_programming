#include "main.h"

/**
 * countd - count how many digits are present in an integer
 *
 * @n: the integer to count
 *
 * Return: number of digits in @n
 */
int countd(int n)
{
	int c = 0;

	do
	{
		n /= 10;
		c++;
	} while (n > 0);
	return (c);
}

/**
 * pow - raise a number to the power of another
 * @base: an integer
 * @exponent: another integer
 *
 * Returns: @base raised to the power of @exponent
 */
int _pow(int base, int exponent)
{
	int _base = base;

	if (exponent == 0)
		return (1);
	for (; exponent > 1; exponent--)
		base *= _base;
	return (base);
}

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
}

int main(void)
{
	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}