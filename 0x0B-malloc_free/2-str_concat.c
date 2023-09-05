#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: array of char
 * @s2: array of char
 * Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *cot;
	int i, pi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = pi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		pi++;
	cot = malloc(sizeof(char) * (i + pi + 1));

	if (cot == NULL)
		return (NULL);
	i = pi = 0;
	while (s1[i] != '\0')
	{
		cot[i] = s1[i];
		i++;
	}

	while (s2[pi] != '\0')
	{
		cot[i] = s2[pi];
		i++, pi++;
	}
	cot[i] = '\0';
	return (cot);
}
