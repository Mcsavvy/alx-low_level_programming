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
	unsigned int i, c;
	unsigned int found;

	for (i = 0; haystack[i]; i++)
	{
		found = 0;

		while (for c = 0; needle[c]; i++)
		{
			if (haystack[i + c] == needle[c])
				found = 1;
			else
			{
				found = 0;
				break;
			}
		}
		if (found)
			return (haystack + i);
	}
	return (NULL);
}
