#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the total number of bytes to copy from src to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		if (i == n)
			break;
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

