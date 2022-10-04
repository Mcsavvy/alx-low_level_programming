#include "main.h"

/**
 * create_array - creates an array of characters and initializes
 *		it with a specific char
 * @size: size of the array
 * @c: the specific char
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (!size)
		return (NULL);
	str = (char *)malloc(size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
