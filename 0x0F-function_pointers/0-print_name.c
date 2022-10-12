#include "function_pointers.h"

/**
 * print_name - calls a function that prints a name
 * @name: the name to print
 * @f: function that prints name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
