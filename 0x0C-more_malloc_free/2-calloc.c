#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include <string.h>

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
	unsigned int i;
	unsigned char *bytePgr = (unsigned char *)pgr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pgr = malloc(nmemb * size);

	for (i = 0; i < nmemb * size; i++)
		bytePgr[i] = 0;

	if (pgr == NULL)
		return(NULL);
	return (pgr);
}
