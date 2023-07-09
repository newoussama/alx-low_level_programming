#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code print the numbers of argument passed on command line
 *
 * 0argc: argument that print numbers of argument
 * 0argv: argument that print names of argument
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
