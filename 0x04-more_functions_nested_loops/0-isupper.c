#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * 0c: print alphabet upper case
 *
 * Return: 1 (success) 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
