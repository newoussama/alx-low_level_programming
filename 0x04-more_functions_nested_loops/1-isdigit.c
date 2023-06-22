#include "main.h"

/**
 * _isdigit: checksif c is a digit from 0 to 9
 *
 * 0c: input
 *
 * Return: 1 if it a digit if not return 0
*/

int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
		return (1);
	else
		return (0);

}
