#include<stdio.h>
#include<stdlib.h>
#include"main.h"
#include <string.h>

/**
 * _memset: a function that copy a string in another memory loca
 * 
 * @s: pointer to put the constant
 * @b:canstant
 * @l: max size to use
 *
 * return: pointer
*/
char *_memset(char *s; char b; unsigned int l)
{
	char *pvr = s;

	while (l--)
		*s++ = b;
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

	if (nmemb == 0 || size == 0)
		return (NULL);

	pgr = malloc(sizeof(int) * nmemb);

	if (pgr == NULL)
		return(NULL);

	_memset(pgr, 0, sizeof(int) * nmemb);

	return (pgr);
}
