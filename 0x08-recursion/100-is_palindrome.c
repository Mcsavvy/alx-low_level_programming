#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a string
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s)
	return (1 + _strlen(s + 1));
	return (0);
}

/**
 * compare_ends - this function checks if a string is a palindrome by
 * recursively comparing the both ends of the string till it gets to
 * the mid point
 *
 * @start: a pointer to the start of the string
 * @end: a pointer to the end of the string
 * @mid: a number specifying how far away the mid point is
 *
 * Return: 1 if string is a palindrome, else 0
 */
int compare_ends(char *start, char *end, int mid)
{
	if (mid == 0) /* we have hit the midpoint! */
		return (*start == *end ? 1 : 0);
	if (*start != *end)
		return (0);
	return (compare_ends(start + 1, end - 1, mid - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the target string
 *
 * Return: 1 if the string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	unsigned int mid, l = _strlen(s);

	if (l < 2) /* l is either 1 or 0 */
		return (1);
	/* get the mid point of the string */
	mid = l / 2;
	if (l % 2 == 1) /* length is an odd number */
		mid += 1;
	return (compare_ends(s, s + l - 1, mid - 1));
}
