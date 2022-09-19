/**
 * rev_string - reverse a string
 * @s: the string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char c; /* this would prove useful later on */
	int length;
	int ind; /* index */
	int rind; /* reverse index */

	/* get the length of the string */
	for (length = 0; s[length] != '\0'; length++)
		continue;

	ind = 0;
	rind = length - 1;

	while (!(ind >= rind))
	{
		c = s[ind];
		s[ind] = s[rind];
		s[rind] = c;

		ind++;
		rind--;
	}
}

