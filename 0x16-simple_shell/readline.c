#include <stdio.h>
#include <stdlib.h>

ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

/**
 * main - entry point
 * Description: prints a prompt and wait for the user to enter a comman, prints it on the next line.
 * Return: always 0
 */
int main(void)
{
	char *line;
	size_t size;
	ssize_t read;
	
	line = malloc(64);
	size = 64;

	while (1)
	{
		printf("$ ");
		read = _getline(&line, &size, stdin);
		if (read == -1)
			break;
		line[read] = '\0';
		printf("got %lu byte[s]: %s", read, line);
	}
	printf("\n");
	return (0);
}




