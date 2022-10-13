#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the
 *		function
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char print_sep = TRUE, *s;

	va_start(args, format);
	i = 0;

	while (format != null && format[i] != '\0')
	{
		print_sep = TRUE;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s is null)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				print_sep = FALSE;
				break;
		}
		if (print_sep is TRUE && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
