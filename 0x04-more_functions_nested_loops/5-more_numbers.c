#include "main.h"

/**
 * more_numbers - functions to print 10 time numbers from 0 to 14
 *
 * Description: print numbers
 *
 * Return: 0 (success)
*/

void more_numbers(void)
{
	int ma, MA, cont;

	for (ma = 1, ma <= 10, ma++)
	{
		for (MA = 0; MA <= 14; MA++)
		{
			ma = cont;
			if (cont > 9)
			{
			_putchar(1 + 48);
			ma = cont % 10;
			}
			_putchar(ma + 48);
		}
		_putchar('\n');
	}

}
