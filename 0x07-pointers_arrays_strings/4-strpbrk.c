#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string
 * @accept: a set of bytes
 *
 * Return: a pointer to the first byte in string which
 * matches one of the bytes in accept, otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int c;

	while (s[i])
	{
		c = 0;
		while (accept[c])
		{
			if (s[i] == accept[c])
				return (s + i);
			c++;
		}
		i++;
	}
	return (NULL);
}
