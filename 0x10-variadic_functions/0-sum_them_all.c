#include "variadic_functions.h"

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
	int s = 0, i = n;
	va_list args;

	if (n <= 0)
		return (0);

	va_start(args, n);

	while (i--)
	{
		int x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
