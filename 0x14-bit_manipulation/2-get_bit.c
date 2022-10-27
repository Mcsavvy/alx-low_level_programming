#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a denary number
 * @index: the index of the bit, starting from 0
 * Return: the value of the bit at index @index or
 *		-1 if an error occured
 */
int get_bit(ulong n, uint index)
{
	if (index > (sizeof(ulong) * 8) - 1)
		return (-1);
	return ((n & (1 << index)) >> index);
}
