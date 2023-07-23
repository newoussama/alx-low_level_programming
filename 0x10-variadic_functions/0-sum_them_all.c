#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all: a function that gives sum of argument
 *
 * @n: constant unsigned argument
 * @va_list: macros
 * @va_start: macros
 * @va_arg: macros
 * @va_end: macros
 * @x: integer
 *
 * Description: variadic function to sum the arguments
 *		implemented
 *
 * Return : x (success) or 0 (fail)
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int s = 0;
	va_list(args);
	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		int x = va_arg(args, const unsigned int);
		s += x;
	}
	va_end(args);
	return (s);
}
