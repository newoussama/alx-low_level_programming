#include "main.h"

/**
 * print_triangle - print a triangle with hashes
 *
 * size: size of the triangle
 *
 * Return: 0 (success)
*/

void print_triangle(int size)
{
	int  ht, ba;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ht = 1; ht <= size; ht++)
		{
			for (ba = 1; ba <= size; ba++)
			{
				if ((ht + ba) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
