#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that call other function
 *
 * @array: an array of integer
 * @size: int
 * @cmp: a pointer of function
 *
 * Description: a function that serch for integer
 *
 * Return : void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
