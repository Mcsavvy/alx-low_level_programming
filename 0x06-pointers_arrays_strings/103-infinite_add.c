#include "main.h"
#include <string.h>

/**
 * add2buf - recursively adds a string to a buffer
 * @buf: a buffer
 * @buf_size: size of buffer
 * @str: the string to add to buffer
 *
 * Return: 1 if operations was successful, else 0
 */
int add2buf(char *buf, int buf_size, char *str, int str_size)
{
	int rind = str_size - 1;

	if (!buf_size)
		return (0);
	if (rind <= 0)
		return (1);
	buf_size--;
	printf("add %c to buf[%d]\n", str[rind], buf_size);
	buf[buf_size] = str[rind];
	if (rind > 0)
		return (add2buf(buf, buf_size, str, rind));
	return (1);
}

/**
 * add2dig - add two digits and return the result
 * @d1: first digit
 * @d2: second digit
 * @co: a carryover value from a previous operation
 *
 * Return: the result of the addition
 */
char add2dig(char d1, char d2, int *co)
{
	int res;

	res = ((int)d1 - 48) + ((int)d2 - 48) + *co;
	if (res > 9)
		*co = 1;
	else
		*co = 0;
	return ((char)res + 48);
}



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
	int size_n1 = 0,
	    size_n2 = 0,
	    op, bg, dr1, dr2,
	    carryover = 0;

	while (n1[size_n1])
		size_n1++;
	while (n2[size_n2])
	       size_n2++;
	bg = size_n1 > size_n2 ? size_n1 : size_n2;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	size_n1--;
	size_n2--;
	size_r--;
	dr1 = n1[size_n1] - 48;
	dr2 = n2[size_n2] - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + carryover;
		carryover = (op >= 10)? op / 10 : 0;
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
		bg--;
		size_r--;
	}
	if (*r == '0')
		return (r + 1);
	return (r);
}
