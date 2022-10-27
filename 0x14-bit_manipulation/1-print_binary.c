#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: a denary number
 * Return: nothing!
 */
void print_binary(ulong n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
