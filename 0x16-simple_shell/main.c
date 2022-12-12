#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

extern char *environ[];



/**
 * main - entry point
 * Description: prints a prompt and wait for the user to enter a comman, prints it on the next line.
 * Return: always 0
 */
int main(void)
{
	char *line, *program, *args;
	size_t size;
	ssize_t read;

	
	line = malloc(64);
	size = 64;

	while (1)
	{
		printf("($) ");
		read = getline(&line, &size, stdin);
		if (read == -1)
			break;
		printf("got %lu byte[s]\n", read);
		program = strtok(line, "\t ");
		args = strtok(NULL, "");
		if (!program)
			continue;
		execute(program, args, NULL);
	}
	printf("\n");
	free(line);
	return (0);
}
