#include "main.h"

/**
 * print_numbers - function tha print numbers
 *
 * Description: print numbers betwin 0 to 9
 *
 * Return: 0 (success)
*/

void print_numbers(void)
{
	int ma = 0;

	do
	{
		_putchar(ma + 48);
		ma++;
	}while (ma >= 48 && ma <= 57);
	_putchar('\n');
}
