#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - fonction
 *
 * @d: a pointer to the struct
 *
 * Description: fonction that freed all the memory
 *		used of the struct
 * Return: (void) success
*/

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
