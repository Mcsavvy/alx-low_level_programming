#include <string.h>
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
	return (strncat(dest, src, n));
}

