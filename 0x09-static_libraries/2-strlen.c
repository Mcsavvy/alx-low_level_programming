/**
 * _strlen - return the length of a string
 * @s: a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}
	return (length);
}

