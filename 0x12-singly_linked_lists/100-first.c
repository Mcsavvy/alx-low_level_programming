#include <stdio.h>

void constructor(void) __attribute__((constructor));

/**
 * constructor - function that starts the program
 * Return: nothing
 */
void constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
