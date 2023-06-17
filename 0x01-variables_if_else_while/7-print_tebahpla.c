#include <stdio.h>

/**
 * main -entry point
 *
 * Description: alphabet in revers
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ma = 'z';

	while (ma >= 'a')
	{
		putchar (ma);
		ma--;
	}
	putchar ('\n');

	return (0);
}
