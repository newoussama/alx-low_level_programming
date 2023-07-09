#include <stdio.h>

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

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", (argv[i] * argv[i + 1]));
	}
	return (0);
}
