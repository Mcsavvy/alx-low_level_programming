#include "main.h"
#include <string.h>

/**
 * rot13 - encode a string using rot13
 * @str: the string to encode
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, s;
	char set1[(13 * 4) + 1] = "abcdefghijklmnopqrstuvwxyz";
	char set2[(13 * 4) + 1] = "nopqrstuvwxyzabcdefghijklm";

	strcat(set1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcat(set2, "NOPQRSTUVWXYZABCDEFGHIJKLM");

	for (i = 0; str[i]; i++)
		for (s = 0; set1[s]; s++)
			if (set1[s] == str[i])
			{
				str[i] = set2[s];
				break;
			}
	return (str);
}

