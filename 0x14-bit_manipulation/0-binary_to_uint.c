#include "main.h"

/**
 * power - gets the power of a number
 * @base: the base number
 * @expo: the exponent
 * Return: base ^ expo
 */
uint power(uint base, uint expo)
{
	if (base == 0)
		return (0);
	if (base == 1)
		return (1);
	if (expo == 0)
		return (1);
	if (expo == 1)
		return (base);
	return (base * power(base, expo - 1));
}

/**
 * binary_to_uint - convert a binary number to an unsigned integer
 * @b: a stream of binary digits
 * Return: the converted number, or 0 if
 *	* there is one or more chars in the stream that isn't 0 or 1
 *	* b is NULL
 */
uint binary_to_uint(const char *b)
{
	uint length, num;
	int i;

	length = num = 0;
	if (b == (void *)0)
		return (0);

	for (length = 0; b[length]; length++)
		if (b[length] != '0' && b[length] != '1')
			return (0);
	if (length == 0)
		return (0);
	for (i = --length; i >= 0; i--)
		if (b[i] == '1')
			num += power(2, length - i);
	return (num);
}
