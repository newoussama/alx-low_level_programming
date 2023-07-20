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
	if (size <= 0)
		return (-1);
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
			i++;
		}
	}
	return (-1);
}