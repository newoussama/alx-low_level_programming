#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers with virguls
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ma = '0';
	char f = ' ';
	char s = ',';

	while (ma <= '9')
	{
		putchar (ma);
		putchar (f);
		putchar (s);
		ma++;
	}
	putchar ('\n');

	return (0);
}
