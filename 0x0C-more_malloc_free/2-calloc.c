#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include <string.h>

/**
 * _memset: a function that copy a string in another memory loca
 * 
 * @m: pointer to put the constant
 * @f:canstant
 * @l: max size to use
 *
 * return: pointer
*/
char *_memset(char *m; char f; unsigned int l)
{
	char *pvr = m;

	while (m--)
		*m++ = f;
	return (pvr);
}

/**
 * _calloc: memory allocated initialised to zero
 *
 * @nmemb: number of element
 * @size: of bites for each nember
 *
 * return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pgr;

	pgr = malloc(sizeof(int) * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (pgr == NULL)
		return(NULL);

	_memset(pgr, 0, sizeof(int) * size);

	return (pgr);
}
