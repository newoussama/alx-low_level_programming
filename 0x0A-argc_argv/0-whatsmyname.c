#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: size of commend line arguments
 * @argv: array that contain the arguments
 *
 * Description: a function that print the name of a program
 *
 * Return : 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%s", argv[0]);

	return (0);
}
