#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_fu - pointer to a function
 *
 * @s: the string implemented by user
 *
 * Description: a pointer to function 
 *
 * return : integer
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =  {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return NULL;
}
