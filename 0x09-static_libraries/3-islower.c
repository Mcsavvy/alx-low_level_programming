#include "main.h"

/**
 * _islower - test if a character is lowercase
 *
 * @c: a character
 *
 * Return: 1 if @c is lowercase or 0 otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
