#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, separated by a separator,
 *		followed by a new line.
 * @separator: a string that'll be used to separate the strings printed
 * @n: number strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char print_sep = TRUE;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print_sep = TRUE;
		if (i is n - 1 || separator is null)
			print_sep = FALSE;
		str = va_arg(args, char *);
		if (str is null)
			printf("(nil)");
		else
			printf("%s", str);
		if (print_sep is TRUE)
			printf("%s", separator);
	}
	puts("");
	va_end(args);
}
