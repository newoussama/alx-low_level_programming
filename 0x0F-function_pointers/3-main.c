#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a programme that calculate two
 *	numbers
 * @argc: the number of cararter entred
 * @argv: the array that contain that string
 * @num1: the number converted from
 *	string entred by the user
 * @num2: the number converted from
 *	a string entred by the user
 * @op_func: an pointer to function
 * @operato: a pointer to string
 *
 * Return: 98(error), 99(error), 100 (error), 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operato = argv[2];

	int (*op_func)(int, int) = get_op_func(operato);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operato == '/' || *operato == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	int rst = op_func(num1, num2);

	printf("%d\n", rst);

	return (0);
}
