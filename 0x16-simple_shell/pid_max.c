#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

/**
 * main - entry point
 * Description: prints the maximum value a process ID can be.
 * Return: always 0
 */
int main(void)
{
	ssize_t nbytes;
	int fd;
	char *buffer;

	fd = open("/proc/sys/kernel/pid_max", O_RDONLY);
	if (fd == -1)
	{
		perror("Error:");
		return (1);
	}
	buffer = malloc(32);
	if (buffer == NULL)
	{
		perror("Error: Memory Not Allocated");
		return (2);
	}
	nbytes = read(fd, buffer, 32);
	if (nbytes == -1)
	{
		perror("Error:");
		return (3);
	}
	close(fd);
	buffer = realloc(buffer, nbytes + 1);
	buffer[nbytes] = '\0';
	printf("PID MAX: %s", buffer);
	free(buffer);
	return (0);
}
