#include "main.h"

/**
 * argstostr - concatenates all arguments passed to it
 * @ac: argument count
 * @av: arguments
 *
 * Return: the concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int lastIndex = 0;
	int length = 0;
	int count, i;
	char *s, *string;

	/* return NULL if ac == 0 or av == NULL */
	if (!(ac && av))
		return (NULL);

	for (count = 0; count < ac; count++)
		for (i = 0; av[count][i]; i++)
			length++;

	string = (char *)malloc(length + ac + 1);

	for (count = 0; count < ac; count++)
	{
		s = av[count];
		for (i = 0; s[i]; i++)
			string[lastIndex++] = s[i];
		string[lastIndex++] = '\n';
	}

	return (string);
}
