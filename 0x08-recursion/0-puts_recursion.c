#include "main.h"

/**
 * puts_recursion - entry point
 *
 * 0s: a string we wont put it in new line
 *
 * Description: a  function that put a string in a new line
 *
 * return: Always 0 (success)
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
