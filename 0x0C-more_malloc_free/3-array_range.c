#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ftk;
	int i, sze;

	if (min > max)
		return (NULL);

	sze = max - min + 1;

	ftk = malloc(sizeof(int) * sze);

	if (ftk == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ftk[i] = min++;

	return (ftk);
}
