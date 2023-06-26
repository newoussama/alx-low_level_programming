#include "main.h"

/**
 * _puts - puts a new line in a centense
 *
 * Description: a function that print a new line
 *
 * return: always 0 (success)
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
