#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 *		from one number to another
 * @n: a denary number
 * @m: another denary number
 * Return: an integer
 */
uint flip_bits(ulong n, ulong m)
{
	ulong o;
	uint i = 0;

	o = n ^ m;

	while (o)
	{
		if (o & 1)
			i++;
		o = o >> 1;
	}
	return (i);
}
