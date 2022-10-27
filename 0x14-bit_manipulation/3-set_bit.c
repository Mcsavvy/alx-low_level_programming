#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: a pointer to a denary number
 * @index: the index of the bit to modify
 * Return: 1 if it worked, -1 if it didn't work
 */
int set_bit(ulong *n, uint index)
{
	if (!n || index > (sizeof(ulong) * 8) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
