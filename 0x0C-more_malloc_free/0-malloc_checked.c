#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 *
 * Description: function that allocate memory with malloc
 *
 * @b: unsigned int
 *
 * Return: arr (success)
*/

void *malloc_checked(unsigned int b)
{
	int i;
	int *arer;

	arer = (int *)malloc(b * sizeof(unsigned int));

	if (arer == NULL)
		return (NULL);

	for (i = 0; i < b; i++)
		arer[i] = i++;
	return (arer);
}
