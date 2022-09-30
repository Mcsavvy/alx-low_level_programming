#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *	print the result of multiplying two
 *	integers supplied as cli arguments.
 * @argc: number of cli args
 * @argv: list of cli args
 * Return: 0 is two arguments were supplied else 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
