#include "main.h"
#include <ctype.h>

/**
 * _islower - test if a character is lowercase
 *
 * @c: a character
 *
 * Return: 1 if @c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char _char = (int)c;

	if (islower(_char))
		return (1);
	return (0);
}
