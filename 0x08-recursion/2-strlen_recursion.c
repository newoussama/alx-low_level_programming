#include "main.h"

/**
 * _strlen_recursion - entry point
 *
 * 0s: string  sign
 *
 * Description: a function that mesure the lenght of a string
 *
 * return: always 0 (success)
*/

int _strlen_recursion(char *s)
{
	int ma = 0;

	if (*s > '\0')
	{
		ma += _strlen_recursion(s + 1) + 1;
	}
	return (ma);

}
