#include "variadic_functions.h"
#include <stdarg.h> 

/**
 * print_all: variadic function to print data type
 *
 * @format: a constant pointer to a conctant
 *	data type.
 *
 * Description: variadic function that print all data types
 *
 * Return: (void) success
*/

void print_all(const char * const format, ...)
{
	va_list all;

	va_start(all, format);

	char const *pmu = format;

	while (*pmu)
	{
		if (*pmu == '%')
		{
			pmu++;
			switch (*pmu)
			{
				case 'c':
					printf("%c", va_arg(all, int));
					break;
				case 'i':
					printf("%d", va_arg(all, int));
					break;
				case 'f':
					printf("%f", va_arg(all, double));
					break;
				case 's':
				{
					char *spr = va_arg(all, char *);

					if (spr == NULL)
						printf("(nil)");
					else
						printf("%s", spr);
					break;
				}
				default:
					break;

			}
		}
		else
			putchar(*pmu);
		pmu++;
	}
	va_end(all);
	putchar('\n');
}
