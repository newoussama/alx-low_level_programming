#include <stdio.h>

/**
 * init_dog: a function that initiatea structure
 *
 * @d: the name of the pointer to a structure
 * @name: the name of the structure
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Return: a pointer to structure
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
