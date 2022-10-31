#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @letters: the number of letters it should read and print
 * @filename: name of the file to read
 * Return: The number of letters it actually prints.
 *		Returns 0 if any error was encountered
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t chars_read, chars_written;
	char *buffer;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);
	chars_read = read(fd, buffer, letters);
	if (chars_read == -1)
		return (0);
	close(fd);
	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_written != chars_read)
		return (0);
	free(buffer);
	return (chars_written);
}
