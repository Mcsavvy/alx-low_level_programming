#include <stdio.h>
#include <stdlib.h>

/**
 * _getline - reads a single line from a FILE
 * @lineptr: a pointer to a malloced buffer that'll hold the line.
 * @n: a pointer to an integer that'll hold the size of lineptr
 * @stream: the FILE stream to read from
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	ssize_t size, ind;
	int c;

	if (!(lineptr && *lineptr))
		return (-1);

	size = *n;
	ind = 0;

	while (1)
	{
		c = fgetc(stream);
		if (c == EOF)
			return (-1);
		if (size == ind)
		{
			size *= 2;
			*lineptr = realloc(*lineptr, size);
			if (*lineptr == NULL)
				return (-1);
		}
		(*lineptr)[ind] = c;
		ind++;
		if (c == '\n')
			break;
	}
	(*lineptr)[ind] = '\0';
	*lineptr = realloc(*lineptr, size);
	size = ind + 1;
	*n = size;
	return (--size);
}
