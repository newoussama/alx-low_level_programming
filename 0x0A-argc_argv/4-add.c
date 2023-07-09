#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a code that add integers
 *
 * 0argc: a main argument to cont argument in the commend line
 * 0argv: a main argument that containthe argument
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
			i += atoi(argv[argc]);
		}
		printf("%d\n", i);
		return (0);

}
