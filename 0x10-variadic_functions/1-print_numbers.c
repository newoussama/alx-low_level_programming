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
	int i = n;
	va_list printn;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(printn, n);
	while (i--)
	{
		int n = va_arg(printn, int);

		printf("%d%s", n, i ? (separator ? separator : "") : "\n");
	}
}
			
