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
	return (strstr(haystack, needle));
}
