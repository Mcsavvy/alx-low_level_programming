#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: a string
 * @c: the character to locate
 *
 * Return: a pointer to the character if fould, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int length, i;

	for (length = 0; s[length]; length++)
		continue;


	for (i = 0; i <= length; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
