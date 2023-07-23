#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers: a variadic function
 *
 * @separator: constant string
 * @n: unsigned int
 *
 * Description: a variadic function that print numbers
 *
 * Return: (void)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	va_start(print, n);

	while (separator != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			int t = va_arg(print, unsigned int);
			printf("%s%d\n", separator, t);
		}
		va_end(print);
	}
}
