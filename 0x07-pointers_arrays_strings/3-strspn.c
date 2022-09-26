#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the full string
 * @accept: the substring
 *
 * Return: how many bytes in the initial segment of s consists
 * of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int c;
	short int contain_byte;

	while (s[i])
	{
		c = 0;
		contain_byte = 0;

		while (accept[c])
		{
			if (s[i] == accept[c])
			{
				contain_byte = 1;
				break;
			}
			c++;
		}
		if (!contain_byte)
			break;
		i++;
	}
	return (i);
}
