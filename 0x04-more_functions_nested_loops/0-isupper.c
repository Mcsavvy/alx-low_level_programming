#include <ctype.h>

/**
 * _isupper - check if character is uppercase
 * @c: a character
 *
 * Return: 1 if @c is uppercase, otherwise 0
 */
int _isupper(char c)
{
	if (isupper(c))
		return (1);
	return (0);
}
