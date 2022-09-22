#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * - both numbers would be strings
 * - the result should be stored in a buffer (string)
 * @n1: first number
 * @n2: second number
 * @r: a buffer where the result should be stored
 * @size_r: the size of the buffer
 *
 * Return: the buffer holding the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1 = 0, size_n2 = 0, op, bg, dr1, dr2, carryover = 0;

	while (n1[size_n1])
		size_n1++;
	while (n2[size_n2])
		size_n2++;
	bg = size_n1 > size_n2 ? size_n1 : size_n2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	size_n1--, size_n2--, size_r--;
	dr1 = n1[size_n1] - 48;
	dr2 = n2[size_n2] - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + carryover;
		carryover = (op >= 10) ? op / 10 : 0;
		r[bg] = (op % 10) + 48;
		if (size_n1 > 0)
		{
			size_n1--;
			dr1 = n1[size_n1] - 48;
		}
		else
			dr1 = 0;
		if (size_n2 > 0)
		{
			size_n2--;
			dr2 = n2[size_n2] - 48;
		}
		else
			dr2 = 0;
		bg--, size_r--;
	}
	if (*r == '0')
		return (r + 1);
	return (r);
}
