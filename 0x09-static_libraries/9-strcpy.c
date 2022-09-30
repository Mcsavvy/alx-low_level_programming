#include "main.h"
#include <string.h>

/**
 * _strcpy - copy the string pointed to by src
 * including the null byte to the buffer pointer to by dest
 *
 * @src: string to be copied
 * @dest: buffer to be copied to
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

