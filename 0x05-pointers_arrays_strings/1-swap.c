#include "main.h"
#include <stdio.h>

/**
 * swap_int - entry point
 *
 * Description: a function who swap the value of two pointers
 *
 * return: always 0 (success)
*/

void swap_int(int *a, int *b)
{
	int ma;

	ma = *a;
	*a = *b;
	*b = ma;
}
