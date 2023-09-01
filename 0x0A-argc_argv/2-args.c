#include<stdio.h>

/**
 * main - entry point
 *
 * @argc: integer
 * @argv: string
 *
 * Description: a programme that print all argument implemented
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
