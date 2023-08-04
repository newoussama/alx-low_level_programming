#include <stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 *
 * @argc: integer
 * @argv: string
 *
 * Description: a program that result multplicate to argument
 *
 * Return: 0 or 1 (success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);

		printf("%d\n", arg1 * arg2);
		return (0);
	}	
}

