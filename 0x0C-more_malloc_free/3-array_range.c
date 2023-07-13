#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function for allocation memory
 *
 * Description: a function that allocate a range of arrays
 *		from min to max
 * @min: int
 * @max: int
 *
 * return: array_range (success)
*/

int *array_range(int min, int max)
{
	int sz = max - min + 1;
	int *arr = malloc(sizeof(int) * sz);

	if (arr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);

	for (int b = 0; b < sz; b++)
	{
		arr[b] = b + 1;
	}
	return (arr);
}
