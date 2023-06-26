#include "main.h"
#include <stdio.h>

/**
 * _strlen - entry point
 *
 * Description: a function that conts the numbers of characters
 *
 * return: Always 0 (success)
*/

int _strlen(char *s)
{
	int ma;

	for (ma = 0; *s != '\0'; s++)
		++ma;
	return (ma)
}
