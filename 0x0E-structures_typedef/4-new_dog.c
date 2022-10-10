#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - get the length of a string
 * @str: the target string
 * Return: the length of str
 */
size_t _strlen(char *str)
{
	size_t length;

	for (length = 0; str[length]; length++)
		continue;
	return (length);
}

/**
 * _strcpy - copies one string to another
 * @src: the string to copy
 * @dest: the string to copy to
 *
 * Return: nothing
 */
void _strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	size_t nl, ol;
	dog_t *d;

	if (name == N || owner == N)
		return (N);

	nl = _strlen(name);
	ol = _strlen(owner);
	n = malloc(nl + 1);
	if (n == N)
		return (N);
	o = malloc(ol + 1);
	if (o == N)
	{
		free(n);
		return (N);
	}
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == N)
	{
		free(n);
		free(o);
		return (N);
	}
	_strcpy(n, name);
	_strcpy(o, owner);
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
