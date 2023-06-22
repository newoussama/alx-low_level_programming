#include "main.h"

/**
 * print_square - print a square using #
 *
 * 0size: is the size of square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int ma, MA;

	for (ma = 1; ma <= size; ma++)
	{
		for (MA = 1; MA <= size; MA++)
			_putchar('#');
		_putchar('\n');
	}
}
