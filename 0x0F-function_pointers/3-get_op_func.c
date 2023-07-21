#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_fu - pointer to a function
 *
 * @s: the string implemented by user
 *
 * Description: a pointer to function 
 *
 * return : integer
*/

oppe get_op_func(char *s)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].operator != NULL; i++)
	{
		if (strcmp(s, ops[i].operator) == 0)
			return (ops.func);
	}
	return NULL;	
}
