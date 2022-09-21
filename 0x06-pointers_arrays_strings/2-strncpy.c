#include <string.h>
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
	return (strncpy(dest, src, n));
}

