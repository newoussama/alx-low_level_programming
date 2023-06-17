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
	char na = 'a';
	char ma = 'A';

	while (na <= 'z')
	{
		putchar (na);
		na++;
	}

	while (ma <= 'Z')
	{
		putchar (ma);
		ma++;
	}
	putchar('\n');

	return (0);
}
