#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function
 *
 * Description: a function that print name
 *	whith the help of a function pointer
 * @name: string of chars
 * @f:function pointer
 *
 * return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
