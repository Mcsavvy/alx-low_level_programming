#include "dog.h"
#include <stdio.h>
#define ISNULL(x) ((x) == N ? 1 : 0)

/**
 * print_dog - prints a dog struct
 * @d: a pointer to a dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != N)
	{
		if (ISNULL(d->name))
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (ISNULL(d->owner))
			puts("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}

}
