#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a code that print all argument that receive
 *
 * argc: argument to count arguments
 * argv: argument to print arguments
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
