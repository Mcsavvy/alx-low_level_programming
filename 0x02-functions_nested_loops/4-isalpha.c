#include "main.h"
#include <ctype.h>

/**
 * _isalpha - test if a character is an alphabet
 *
 * @c: a character
 *
 * Return: 1 if @c is an alphabet or 0 otherwise
 */
int _isalpha(int c)
{
	char _char = (int)c;

	if (isalpha(_char))
		return (1);
	return (0);
}
