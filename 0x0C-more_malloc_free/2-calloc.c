#include<stdio.h>
#include<stdlib.h>
#include"main.h"

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

	if (nmemb == 0 || size == 0)
		exit(0);
	pgr = malloc(nmemb * size);

	for (i = 0; i < nmemb; i++)
		pgr = 0;
	if (pgr == NULL)
		exit(0);
	return (pgr);
}
