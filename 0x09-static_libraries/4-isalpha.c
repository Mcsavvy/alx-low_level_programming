#include "main.h"

/**
 * _isalpha - test if a character is an alphabet
 *
 * @c: a character
 *
 * Return: 1 if @c is an alphabet or 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' || c <= 'Z'))
		return (1);
	return (0);
}
