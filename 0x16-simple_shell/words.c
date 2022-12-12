#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument variables
 * Return: an integer
 */
int main(int ac, char *av[])
{
	char *string, *curr, *next;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <string>\n", av[0]);
		return (1);
	}
	string = av[1];
	curr = strtok(string, "\t ");
	next = strtok(NULL, "\t ");
	if (!curr)
		return (0);
	if (!next)
	{
		printf("%s\n", curr);
		return (0);
	}
	printf("%s, ", curr);
	curr = next;

	while (1)
	{
		next = strtok(NULL, "\t ");
		if (!next)
			break;
		printf("%s, ", curr);
		curr = next;
	}
	printf("%s\n", curr);
	return (0);
}
