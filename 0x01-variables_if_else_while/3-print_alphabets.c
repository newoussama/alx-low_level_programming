#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code who print alphabit lower upper
 *
 * Return: 0 (success)
*/

int main(void)
{
	char na = 'a', ma = 'A';

	while (na <= 'z', ma <= 'Z')
	{
		putchar (na);
		putchar (ma);
		na++, ma++;
	}
	putchar('\n');
	return (0);
}
