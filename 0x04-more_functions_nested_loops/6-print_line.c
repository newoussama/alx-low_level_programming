#include "main.h"

/**
 * print_line - print a line
 *
 * Description: a function who print line n time
 *
 * 0n: is the number of time the line be printed
 *
 * Return: 0 (success)
*/

void print_line(int n)
{
	if (n > '0' && n <= '9')
		_putchar(95);
	else
		_putchar('\n');

}
