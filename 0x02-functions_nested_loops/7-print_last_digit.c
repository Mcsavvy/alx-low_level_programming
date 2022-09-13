#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_last_digit - print and return last digit of @n
 *
 * @n: number
 *
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	int l = abs(n % 10);

	_putchar(48 + l);
	return (l);
}
