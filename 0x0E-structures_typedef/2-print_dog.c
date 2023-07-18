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
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
