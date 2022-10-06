#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the previously allocated memory
 * @old_size: the size of the previously allocated memory
 * @new_size: the size of the memory to be allocated
 *
 * Return: reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int b;
	unsigned int nbytes; /* no of bytes to copy */
	void *buffer;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		nbytes = old_size;
	else
		nbytes = new_size;

	buffer = malloc(new_size);
	if (buffer == NULL)
		return (NULL);
	if (ptr == NULL)
		return (buffer);
	for (b = 0; b < nbytes; b++)
		((char *)buffer)[b] = ((char *)ptr)[b];
	free(ptr);
	return (buffer);
}
