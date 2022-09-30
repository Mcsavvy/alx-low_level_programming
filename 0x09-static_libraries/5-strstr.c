#include "main.h"
#include <string.h>

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
	if (!*haystack)
		return (NULL);
	else if (*haystack == *needle)
		return (haystack);
	return (_strstr(haystack + 1, needle));
}
