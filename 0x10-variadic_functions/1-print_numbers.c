#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers: a variadic function to print numbers
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

	for (int i = 0; i < n; i++)
	{
		int t = va_arg(print, unsigned int);

		printf("%d", t);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);

}