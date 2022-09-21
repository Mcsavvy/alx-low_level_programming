#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize all words or a string
 * @str: target string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	/* create a string that contains all separators */
	char *seps = ",;.!?\"(){} \t\n";
	int i, s;

	/* use a loop to iterate through each character in the string */
	for (i = 0; str[i]; i++)
	{
		/**
		 * make the first character uppercase
		 * then immediately move to the next loop
		 */
		if (i == 0)
		{
			str[i] = toupper(str[i]);
			continue;
		}

		/**
		 * if the last character was one of the separators,
		 * make the current character uppercase
		 */
		for (s = 0; seps[s]; s++)
		{
			if (str[i - 1] == seps[s])
			{
				str[i] = toupper(str[i]);
				break;
			}
		}
	}
	return (str);
}
