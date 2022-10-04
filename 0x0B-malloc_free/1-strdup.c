#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: new string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, l;

	if (str == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		continue;

	s = (char *)malloc(l + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		s[i] = str[i];

	return (s);
}
