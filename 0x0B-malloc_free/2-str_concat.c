#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - entry point
 *
 * Description: a function that help us in our code
 *
 * return: always 1 (success)
*/

int _strlen(char *m)
{
	int size = 0;

	for (; m[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - concatinate two strings
 *
 * Description: a function that concatinate two strings
 *
 * return: 1 (success)
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *ma;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	ma = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (ma == 0)
	{
		return (0);
	}
	for (i = 0; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
		{
			ma[i] = s1[i];
		}
		else
		{
			ma[i] = s2[i - sz1];
		}
	}
	ma = '\0';
	return (ma);
}
