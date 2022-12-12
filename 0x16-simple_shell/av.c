#include <stdio.h>

/**
 * main - entry point
 * Description: print all argument variables
 * Return: always 0
 */
int main(int ac __attribute__((unused)), char *av[])
{
	int i = 0;

	while (av[i + 1])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("%s\n", av[i]);
	return (0);
}
