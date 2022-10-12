#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *	perform simple operations.
 * @argc: number of commandline arguments passed
 * @argv: an array of commandline arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a, b;
	char *opstr;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	opstr = argv[2];
	op = get_op_func(opstr);
	if (op == NULL || opstr[1] != '\0')
	{
		puts("Error");
		exit(99);
	}
	if ((*opstr == '/' || *opstr == '%') && b == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", op(a, b));
	return (0);
}
