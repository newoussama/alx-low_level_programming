#include "main.h"

/**
 *
 * print_alphabet: code print alphabet a - z with putchar
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
