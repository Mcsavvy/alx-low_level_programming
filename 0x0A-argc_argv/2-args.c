#include <stdio.h>

/**
 * main - entry point
 *	print all cli arguments passed
 *	to the function; one per line.
 * @argc: number of cli args
 * @argv: list of cli args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
