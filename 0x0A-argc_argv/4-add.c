#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: integer
 * @argv: string
 *
 * Description: a program that add the sum of numbers
 *
 * Return: 0 or 1 (success)
*/

int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 0; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (!isdigit(*argv[i]) || num < 0)
			{
				printf("Error\n");
				return (1);
			}
			add += num;
		}
		printf("%d\n", add);
	}
	return (0);
}
