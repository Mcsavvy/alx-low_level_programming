#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string pointer
 * @src: another string pointer
 * Return: a string pointer
 */
char *_strcat(char *dest, char *src)
{
	int l, i;

	for (l = 0; dest[l]; l++)
		continue;

	for (i = 0; src[i]; i++)
		dest[l + i] = src[i];
	return (dest);
}

