#include "main.h"

/**
 * str_concat - concatenate two strings into a new one
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int l1, l2, i;

	if (s1 == NULL)
		l1 = 0;
	else
		for (l1 = 0; s1[l1]; l1++)
			continue;
	if (s2 == NULL)
		l2 = 0;
	else
		for (l2 = 0; s2[l2]; l2++)
			continue;

	str = (char *)malloc(l1 + l2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (i = 0; i < l2; i++)
		str[l1 + i] = s2[i];
	return (str);
}
