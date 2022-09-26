#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the full string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, c;
	short int found;

	while (haystack[i])
	{
		c = 0;
		found = 0;

		while (needle[c])
		{
			if (haystack[i + c] == needle[c])
				found = 1;
			else
			{
				found = 0;
				break;
			}
			c++;
		}
		if (found)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
