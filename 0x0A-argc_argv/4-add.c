#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *	adds positive numbers passed in
 *	from the command line.
 * @argc: number of cli args
 * @argv: list of cli args
 * Return: 1 if any numbers contains a non-digit symbol, else 0
 */
int main(int argc, char *argv[])
{
	unsigned int total = 0;
	unsigned int num;
	int i;
	int c;

	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c]; c++)
			if (!isdigit(argv[i][c]))
			{
				printf("Error\n");
				return (1);
			}
		num = atoi(argv[i]);
		total += num;
	}
	printf("%d\n", total);
	return (0);
}
