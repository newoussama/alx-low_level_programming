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
	int ma = 0;

	while (ma <= 9)
	{
		putchar (ma + 48);
	if (ma != 9)
	{
		putchar (',');
		putchar (' ');
	}
	ma++;
	}
	putchar ('\n');

	return (0);
}
