#include <stdio.h>

/**
 * main - entry point
 *	prints number of arguments passed in
 *	and exits
 * @argc: number of cli args passed
 * @argv: list of cli args passed
 * Return: Always(0);
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
