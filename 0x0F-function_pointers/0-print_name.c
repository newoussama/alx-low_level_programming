#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name: a function that print a name
 *
 * @name: is the string we want print it
 * @(*f): a pointer to a function
 *
 * description: function that use a pointer to a a function
 *		to print a name
 * return: name printed (success)
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
