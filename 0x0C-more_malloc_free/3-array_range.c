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
	int sz, b;
	int *array_;

	sz = max - min + 1;
	array_ = (int*)malloc(sz * sizeof(int));

	if (min > max)
		return NULL;

	if (array_ == NULL)
		return NULL;

	for (b = 0; b < sz; b++)
	{
		array_[b] = min++;
	}
	return (array_);
}
