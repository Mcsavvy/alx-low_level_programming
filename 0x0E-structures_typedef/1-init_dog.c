#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to a dog struct
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing!
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != N)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
