#include "main.h"
#include <string.h>


/**
 * main - entry point
 *
 * print '_putchar' followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int length = strlen(str), i;

	for (i = 0; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
