#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicate strings
 *
 * Description: function that returns a pointer to
 * a newly allocated space in memory
 *
 * str: a place in memory hold the address
 *
 * Return: 0 (success)
*/

char *_strdup(char *str)
{
	int n = 0, sz = 0;
	char *rt;

	if (str == NULL)
		return (NULL);

	for (; str[sz] != '\0'; sz++)
	 ;
	rt = malloc(sz * sizeof(*str) + 1);

	if (rt == 0)
		return (NULL);
	else
	{
		for (; n < sz; n++)
			rt[n] = str[n];
	}
	return (rt);
}
