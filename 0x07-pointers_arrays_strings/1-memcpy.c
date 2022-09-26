#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy from src to dest
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int byte = 0;

	while (byte < n)
	{
		*(dest + byte) = *(src + byte);
		byte++;
	}
	return (dest);
}

