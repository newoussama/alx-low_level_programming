#include <stdio.h>

/**
 * main - entry point
 *
 * Descreption: code who print numbers whith only putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar (a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
