#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * malloc_checked: function allocate memory
 *
 * @b: unsigned integer
 *
 * Description: a function that allocate memory with malloc
 *
 * return: pointer or (98) (success)
*/

void *malloc_checked(unsigned int b)
{
	int *ft;

	ft = (int *)malloc(b * sizeof(int));

	if (ft == NULL)
		*ft = 98;
}
