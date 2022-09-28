#include "main.h"

/**
 * is_divisible - checks if a number is divisible by a divisor.
 * @num: target number
 * @div: divisor
 *
 * Return: 1 if num is divisible by div, otherwise 0
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (1);
	if (div == num / 2)
		return (0);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: target number
 * Return: 1 if num is a prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (is_divisible(n, 2) ? 0 : 1);
}
