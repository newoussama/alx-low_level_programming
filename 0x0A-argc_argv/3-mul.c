#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: a code that multiple two numbers
 *
 * 0argc: argument for conting argument
 * 0argv: argument that print argument
 *
 * return : 0 (success)
*/

int main(int argc, char const argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
		return (0);
}
