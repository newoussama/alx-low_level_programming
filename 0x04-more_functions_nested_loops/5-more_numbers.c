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

	for (MA = 1, MA <= 10, MA++)
	{
		for (cont = 0; cont <= 14; cont++)
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
