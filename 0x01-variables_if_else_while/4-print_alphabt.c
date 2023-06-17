#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code who print alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char na = 'a';

	while (na <= 'z')
	{
		if (na == 'e' || na == 'q')
		na++;
		putchar(na);
		na++;
	}
	putchar('\n');
	return (0);
}
