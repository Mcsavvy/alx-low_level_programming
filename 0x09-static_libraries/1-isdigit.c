#include <ctype.h>

/**
 * _isdigit - check if character is a digit
 * @c: a character
 *
 * Return: 1 if @c is a digit, otherwise 0
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
