#include "function_pointers.h"

/**
 * int_index: a function that search for integer
 *
 * @array: array of integer
 * @size: size of array
 * @cmp: a pointer to function
 *
 * return: return a pointer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
