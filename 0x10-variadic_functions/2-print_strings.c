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
	int s = 0;
	va_list string;
	va_start (string, n);

	if (separator == NULL)
		return;

	for (int i = 0; i < n; i++)
	{
		char *v = va_arg(string, char *);
		printf("%s", v);

		if (v == NULL)
			printf("(nil)");
		else if(i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}


