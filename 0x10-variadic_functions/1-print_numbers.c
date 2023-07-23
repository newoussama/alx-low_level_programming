#include "variadic_functions.h"

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
	if (separator == NULL)
		return;
	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(print, n);

	for (int i = 0; i < n; i++)
	{
		int t = va_arg(print, int);

		printf("%d", t);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print);

}
