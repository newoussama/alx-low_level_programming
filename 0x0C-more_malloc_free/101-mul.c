#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point to a programme for mul of  two numbers
 *
 * @argc: integer
 * @argv: array of string
 *
 * return: result of mul of two argumentes
*/

int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;

	if (argc > 3)
	{
		printf("Error");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 > '9' && num1 < '0' || num2 > '9' && num2 < '0')
	{
		printf("Error");
		return (98);
	}
	else
		printf("%d", result);

}
