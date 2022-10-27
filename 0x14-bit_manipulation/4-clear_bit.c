#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: a pointer to a denary number
 * @index: the index of the bit to modify
 * Return: 1 if it worked, -1 if it didn't work
 */
int clear_bit(ulong *n, uint index)
{
	if (!n || index > (sizeof(ulong) * 8) - 1)
		return (-1);
	if ((*n & (1 << index)) >> index)
		*n = *n ^ (1 << index);
	return (1);
}
