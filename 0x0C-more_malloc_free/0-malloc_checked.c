#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of integer to allocate
 *
 * Return: a pointer
*/

void *malloc_checked(unsigned int b)
{
	void *sgn;

	sgn = malloc(b);

	if (sgn == NULL)
		exit(98);

	return (sgn);
}

