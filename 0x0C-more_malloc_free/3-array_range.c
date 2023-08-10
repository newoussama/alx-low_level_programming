#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * array_range: create a array range from in to max
 *
 * @min: integer
 * @max: integer
 *
 * return: pointer to allocate memory
*/

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *prt;

	prt = malloc(sizeof(int) * (min - max) + 1);

	if (prt == NULL)
		return (NULL);
	return (prt);
}
