#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: the string to convert
 * Return: the integer gotten from the conversion
 */
int _atoi(char *s)
{
	short int m = 1; /* negative or positive multiplier */
	unsigned short int i;
	unsigned int num;

	while (*s != '\0')
	{
		if (*s == '-')
			m *= -1;
		else if (*s == '+')
			m *= +1;
		else if (*s >= '0' && *s <= '9')
			break;
		s += 1;
	}
	
	for (i = 0; s[i] <= '9' || s[i] >= '0'; i++)
		num += (10 * i) + ((int)(s[i]) - 48);

	return (num * m);
}

