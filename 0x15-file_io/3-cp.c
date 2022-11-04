#include "main.h"
#include <stdio.h>


/**
 * cpy - a helper function that copies content from one file
 *	to another using a buffer of 1024 bytes
 * @src: source file
 * @dest: destination file
 * Return: nothing
 */
void cpy(file_t *src, file_t *dest)
{
	int chars_r, chars_w;
	char buffer[1024];

	while (1)
	{
		chars_r = read(src->fd, buffer, 1024);
		if (chars_r == -1)
		{
			close(src->fd);
			close(dest->fd);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src->name);
			exit(98);
		}
		chars_w = write(dest->fd, buffer, chars_r);
		if (chars_w == -1)
		{
			close(src->fd);
			close(dest->fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest->name);
			exit(99);
		}
		if (chars_r < 1024)
			break;
	}
	/* write(dest, &eof, 1); */
}



/**
 * main - Entry point to the program
 * @ac: number of argument variables supplied
 * @av: list of argument variables supplied
 * Return: an integer
 *
 * Description: A program that copies the content of a file to another file.
 */
int main(int ac, char *av[])
{
	file_t src, dest;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src.name = av[1];
	src.fd = -1;
	dest.name = av[2];
	dest.fd = -1;

	src.fd = open(src.name, O_RDONLY);
	if (src.fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src.name);
		exit(98);
	}
	dest.fd = open(dest.name, O_WRONLY | O_TRUNC | O_CREAT, 0x01B4);
	if (dest.fd == -1)
	{
		close(src.fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest.name);
		exit(99);
	}
	cpy(&src, &dest);
	if (close(src.fd) == -1)
	{
		close(dest.fd);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", src.fd);
		exit(100);
	}
	if (close(dest.fd) == -1)
	{
		close(src.fd);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dest.fd);
		exit(100);
	}
	exit(0);
}
