#include "variadic_functions.h"

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
	int i = 0;
	int flag;

	va_list all;

	va_start(all, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(all, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				flag = 1;
				break;
			case 's':
			{
				char *spr = va_arg(all, char *);

				if (spr == NULL)
					printf("(nil)");
				else
				{
					printf("%s", spr);
					flag = 1;
					break;
				}
				default:
					flag = 0;
					break;
			}
			if (format[i] != '\0' && flag == 1)
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(all);
	}
}
