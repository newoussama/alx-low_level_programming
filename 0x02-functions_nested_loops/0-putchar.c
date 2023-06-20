#include "main.h"

/**
 * main - entry point
 *
 * Description: code to print putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar"
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[]);
	_putchar('\n');

	return (0);

}
