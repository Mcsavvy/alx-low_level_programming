#include "main.h"

/**
 * _isspace - checks if a char is a whitespace
 * @c: a char
 * Return: 1 if c is a whitespace, else 0
 */
int _isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

/**
 * skipspace - skip all spaces and jump to the start of the next word
 * @str: a string
 * Return: a pointer to the beginning of the next word
 */
char *skipspace(char *str)
{
	if (!_isspace(*str))
		return (str);
	return (skipspace(str + 1));
}

/**
 * countchars - count the character in the first word of a string
 * @str: a string
 * Return: the length of the word
 */
unsigned int countchars(char *str)
{
	if (_isspace(*str) || !*str)
		return (0);
	return (1 + countchars(str + 1));
}

/**
 * countwords - count how wany words are in a string
 * @str: a string
 * Return: the number of words in the string
 */
unsigned int countwords(char *str)
{
	char *s = str;
	unsigned int wc = 0;
	char state = 0;

	while (*s)
	{
		if (_isspace(*s))
			state = 0;
		else if (state == 0)
		{
			state = 1;
			++wc;
		}
		++s;
	}
	return (wc);
}

/**
 * strtow - split a string into words
 * @str: a string
 * Return: an array of words found in the string
 */
char **strtow(char *str)
{
	char **words;
	char *word;
	unsigned int w, i, c, length, wc;

	if (str == NULL || !*str)
		return (NULL);

	word = skipspace(str);
	if (!word[0]) /* is word an empty string */
		return (NULL);
	/* allocate space for all words */
	wc = countwords(word);
	words = (char **)malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	/* loop through every word found */
	for (w = 0; w < wc; w++)
	{
		length = countchars(word);
		/* allocate space for each word */
		words[w] = (char *)malloc(sizeof(char) * length + 1);
		/* if this space cannot be allocated, clear all previously allocated space */
		if (words[w] == NULL)
		{
			for (i = 0; i < w; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		/* fill up each word with the appropriate chars */
		for (c = 0; c < length; c++)
			words[w][c] = word[c];
		words[w][c] = '\0';
		/* skip to the next word */
		word = skipspace(word + length);
	}
	/* NULL should be the last item in the array */
	words[w] = NULL;
	return (words);
}
