#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code hexa
 *
 * Return: 0(success)
*/

int main(void)
{
	char ma = '0';
	char MA = 65;

	while (ma <= '9')
	{
		putchar (ma);
		ma++;
	}
	while (MA <= 70)
	{
		 putchar (MA);
		 MA++;
	}
	putchar('\n');

	return (0);
}
