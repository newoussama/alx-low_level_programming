#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - entry point
 *
 * Description: a function that allocat memory
 *
 * Return: 1 (success)
*/

char *create_array(unsigned int size, char c)
{
	char *tr;

	tr = malloc(size);

	if (size == 0 || tr == 0)
	{
		return (0);
	}
	while (size--)
	{
		tr[size] = c;
	}
	return (tr);
}
