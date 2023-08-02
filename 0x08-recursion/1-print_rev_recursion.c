#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion: recursive function
 *
 * @s: a string of character
 *
 * Description: a function that print a string reverset
 *
 * Return: s (success)
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
