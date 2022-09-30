#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a memory buffer
 * @b: the byte to fill the memory with
 * @n: the number of bytes to fill in the memory
 *
 * Return: the memory buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
