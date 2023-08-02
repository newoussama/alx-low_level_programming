#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion: recursive function
 *
 * @s: a pointer for a string
 *
 * Description: a function that put a string
 *
 * return: (s) success
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
