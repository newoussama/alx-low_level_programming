#include "dog.h"
#include <stdio.h>

/**
 * @d: the pointer of the structure
 *
 * description: a function that print the structure
 *		and  verify it
 * return: (void)
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
