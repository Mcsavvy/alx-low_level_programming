#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * _atoi - convert a string to integer
 * @s: the string to convert
 * Return: the integer gotten from the conversion
 */
int _atoi(char *s)
{
	short int m = 1; /* negative or positive multiplier */
	char *str = "";
	unsigned int i;

	while (*s != '\0')
	{
		if (*s == '-')
			m *= -1;
		else if (*s == '+')
			m *= +1;
		else if (isdigit(*s))
		{
			str = s;
			break;
		}
		s += 1;
	}
	i = atoi(str);
	if (i == 0)
		return (0);
	return (i * m);
}

