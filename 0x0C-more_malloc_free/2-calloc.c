#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of members in the array
 * @size: size of each member in the array
 * Return: the created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		((char *)ptr)[i] = 0x00;
	return (ptr);
}
