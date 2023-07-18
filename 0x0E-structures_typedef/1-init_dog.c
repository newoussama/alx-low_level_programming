#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function
 *
 * Desccription: a function that initialize
 *		a structure
 * @d: pointer for the structure
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner ofthe dog
 *
 * Return: return the stucture d
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return init;
}
