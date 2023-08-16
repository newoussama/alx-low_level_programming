#include "function_pointers.h"

/**
 * array_itterator: a function that create a array
 *
 * @array: array of data
 * @size: the size of the array
 * @action: pointer to function
 *
 * return: array (success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
