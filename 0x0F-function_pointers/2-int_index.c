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

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]));
				return (i);
			i++;
		}
	}
	return (-1);
}
