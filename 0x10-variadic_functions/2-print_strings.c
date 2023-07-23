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
	va_list string;

