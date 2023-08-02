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
	int n = 0;

	if (s[n] == '\0')
		return;
	_putchar(s[n]);
	_puts_recursion(s[n] + 1);
}
