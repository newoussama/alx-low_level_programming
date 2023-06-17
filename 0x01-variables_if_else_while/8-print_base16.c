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
	char MA = 'a';

	while (ma <= '9')
	{
		putchar (ma);
		ma++;
	}
	while (MA <= 'f')
	{
		 putchar (MA);
		 MA++;
	}
	putchar ('\n');

	return (0);
}
