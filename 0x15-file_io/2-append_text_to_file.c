#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: stuff to append into the file
 * Return: 1 if successful, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = 0;

	if (!filename)
		return (-1);
	while (text_content && text_content[length])
		length++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!length)
		return (1);
	if (write(fd, text_content, length) == -1)
		return (-1);
	close(fd);
	return (1);
}
