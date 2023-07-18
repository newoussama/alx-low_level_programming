#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function
 *
 * @d: pointer to the structure
 *
 * Description: function that print content of the variable inside
 *		the structure
 * Return: return (void)
*/

void print_dog(struct dog *d)
{
	d = (struct dog *)malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

	if (d == NULL)
		printf("(nil)");
	if (d->name == NULL)
		printf("Name: (nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner);
}
