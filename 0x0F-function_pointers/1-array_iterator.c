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
	int *ed = array + size - 1;

	if (array && size && action)
		while (array <= ed)
			action(*array++);
}
