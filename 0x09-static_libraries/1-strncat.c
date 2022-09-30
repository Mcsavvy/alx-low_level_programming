#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the total number of bytes to concatenate from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	for (l = 0; dest[l]; l++)
		continue;

	for (i = 0; src[i]; i++)
	{
		if (i == n)
			break;
		dest[l + i] = src[i];
	}
	return (dest);
}

