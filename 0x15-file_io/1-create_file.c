#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[length])
		length++;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, (1 << 8) | (1 << 7));
	if (fd == -1)
		return (-1);
	if (!length)
		return (1);
	if (write(fd, text_content, length) == -1)
		return (-1);
	close(fd);
	return (1);
}
