#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - a function
 *
 * @array: a pointer to an anteger array
 * @size: the size of the array
 * @action: a pointer to a function
 *
 * Description: a function that call atthor functions
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size -1;

	if (array && size && action)
		while (array <= end)
			action(array++);
}
