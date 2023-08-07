#include<stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup: function that print a string
 *
 * @str: a string that we can copy on our
 *	memory allocated
 *
 * Description: function that allocate memory and pass on it a
 *	string
 *
 * Return: NULL OR POINTER (success)
*/

char *_strdup(char *str)
{
	char *pvr;
	int lt, i;

	if (str == NULL)
		return (NULL);

	lt = strlen(str);

	pvr = (char *)malloc((lt + 1) * (sizeof(char)));

	for (i = 0; i <= lt; i++)
	{
		pvr[i] = str[i];
	}
	if (pvr == NULL)
		return (NULL);
	pvr[lt] = '\0';

	return (pvr);
}
