#include "variadic_functions.h"

/**
 * print_strings - variadic function that print string
 *
 * @separator: string
 * @n: const unsigned int
 *
 * Description: function that print strings with seperator
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *spr;
	va_list string;

	if (!n)
	{
		printf("\n");
                return;
	}
	va_start (string, n);

	while (i--)
	{
		printf("%s%s", (spr = va_arg(string, char *)) ? spr : "(nil)", i ? (separator ? separator : "") : "\n");
	}
	va_end(string);
}


