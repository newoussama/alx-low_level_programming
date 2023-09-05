#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
*/

char *_strdup(char *str)
{
	char *dsr;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dsr = malloc(sizeof(char) * (i + 1));

	if (dsr == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		dsr[k] = str[k];

	return (dsr);
}
