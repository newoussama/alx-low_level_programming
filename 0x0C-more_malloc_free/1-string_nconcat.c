#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * string_nconcat: a function that concatinate two strings
 *
 * @s1: the first string
 * @s2: the segand string
 * @n : the numbere of bytes
 *
 * Description: function that concatinate two strings
 *
 * return: NULL or pointers (success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pnr;
	unsigned int cs1, cs2, i, j;

	cs1 = strlen(s1);
	cs2 = strlen(s2);

	pnr = (char *)malloc(cs1 + n + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= cs2)
		n = cs2;
	for (i = 0; i < cs1; i++)
		pnr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		pnr[i] = s2[j];
		i++;
	}
	pnr[i] = '\0';

	return (pnr);
}

