#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: the numbers of argument 
 * @argv: the array that contain this argument
 *
 * Description: a programe that print the number of argument
 *
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc);

	return (0);
}
