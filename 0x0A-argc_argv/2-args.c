#include <stdio.h>

/**
 * main - entry point
 * 	  print all cli arguments passed
 * 	  to the function; one per line.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
