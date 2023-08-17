#include "3-calc.h"

/**
 * get_op_fuct: a function that bring the operation
 *		in the task
 * @s: the operator string
 *
 * Description: a function that take the operator and
 *		give the right operation func
 * return: opperation function
*/

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
