#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * isdigits - checks if a string contains only digits
 * @string: a string
 * Return: 1 if string contains only nums, else 0
 */
int isdigits(const char *string)
{
	unsigned int i;

	for (i = 0; string[i]; i++)
		if (string[i] > '9' || string[i] < '0')
			return (0);
	return (1);
}

/**
 * Array - creates a char array of a specified size and
 * fills it with a constant byte
 * @size: the size of array (in bytes)
 * @b: a constant byte
 * Return: created array
 */
char *Array(unsigned int size, char b)
{
	unsigned int i;
	char *buffer;

	buffer = (char *)malloc(size);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = b;
	return (buffer);
}

/**
 * toint - converts a char into it's appropriate int value
 * @n: the char to be converted
 * Return: an integer
 */
int toint(char n)
{
	return (((int)n) - 48);
}

/**
 * mul - multiply integers in strings
 * @num1: first integer
 * @num2: second integer
 * @result: a buffer where the result would be stored
 * Return: nothing
 */
void mul(char *num1, char *num2, char *result)
{
	unsigned int len1, len2, i_n1, i_n2, carry, n1, n2, sum;
	int i, j;

	len1 = strlen(num1);
	len2 = strlen(num2);
	i_n1 = i_n2 = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = toint(num1[i]);
		i_n2 = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = toint(num2[j]);
			sum = n1 * n2 + toint(result[i_n1 + i_n2]) + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = (char)(sum % 10) + 48;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] = (char)(toint(result[i_n1 + i_n2]) + carry) + 48;
		i_n1++;
	}
}

/**
 * revrstr - reverse a string inplace
 * @s: the string
 * Return: nothing
 */
void revrstr(char *s)
{
	unsigned int ind, rind, l;
	char c;

	l = strlen(s);
	ind = 0;
	rind = l - 1;
	while (ind < rind)
	{
		c = s[ind];
		s[ind] = s[rind];
		s[rind] = c;
		ind++;
		rind--;
	}
}

/**
 * main - entry point
 * @argc: number arguments passed
 * @argv: list of arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	unsigned int len1, len2;
	int l;
	char *num1, *num2, *result;

	if (argc != 3 || !isdigits(argv[1]) || !isdigits(argv[2]))
	{
		puts("Error");
		exit(98);
	}
	num1 = strdup(argv[1]);
	if (num1 == NULL)
		exit(98);
	num2 = strdup(argv[2]);
	if (num2 == NULL)
	{
		free(num1);
		exit(98);
	}
	len1 = strlen(num1);
	len2 = strlen(num2);
	result = Array(len1 + len2, '0');
	if (result == NULL)
		exit(98);
	mul(num1, num2, result);
	l = strlen(result) - 1;
	for (; l >= 0 && result[l] == '0'; l--)
		result[l] = '\0';
	if (l == -1)
		puts("0");
	else
	{
		revrstr(result);
		puts(result);
	}
	free(result);
	free(num1);
	free(num2);
	return (0);
}
