#include "main.h"

/**
 * print_most_numbers - print most of numbers betwen 0 and 9
 *
 * Description: print numbers exept 2 and 4
 *
 * Return: 0 (success)
*/

void print_most_numbers(void)
{
	int ma;

	for (ma = 0; ma <= 9; ma++)
	{
		if (ma == 2 || ma == 4)
			continue;
		_putchar(ma + 48);
	}
	_putchar('\n');

}
