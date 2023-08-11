#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc: function that reallocat memory using malloc and free
 *
 * @ptr: pointer to part of memory
 * @old_size: the size of an old part of memory
 * @new_size: the size of new part of memory
 *
 * return: pointer (success) or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *m;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) - *((char *)ptr + i);
		free(ptr);
	}
	return (m);
}
