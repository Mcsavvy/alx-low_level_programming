#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	if (!(*s1) || !(s2))
		return (0);
	return (_strcmp(s1 + 1, s2 + 1));
}
