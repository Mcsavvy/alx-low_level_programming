#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: target string
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	/* make all characters uppercase using a loop */
	for (i = 0; str[i]; i++)
		str[i] = toupper(str[i]);

	return (str);
}
