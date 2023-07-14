#include "main.h"
#include <stdlib.h>
/**
 * _calloc : a function that allocate memory with calloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Description: a function that allocates memory for an array, using malloc
 *
 * @arr: the name of the array allocated
 *
 * Return: arr (success)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int sz;
	int *arr, n;

	sz = nmemb * size;
	arr = malloc(sizeof(unsigned int) * sz);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < sz; n++)
		arr[n] = 0;
	return (arr);
}
