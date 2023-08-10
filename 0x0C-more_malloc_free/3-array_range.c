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
	int *prt;
	int sum, i;

	sum = max - min + 1;

	if (min > max)
		return (NULL);

	prt = malloc(sizeof(int) * sum);

	for (i = 0; i <= sum; i++)
		prt[i] = min + i;
	if (prt == NULL)
		return (NULL);
	return (prt);
}
