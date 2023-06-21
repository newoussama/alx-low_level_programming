#include "main.h"

/**
 * Print_alpha_x10 - function that will print alphabet 10 time
*/

int main(void)
{
	int MA, ma;

	for (MA = 0; MA <= 9; MA++)
	{
		for (ma = 'a'; ma <= 'z'; ma++)
		{
			_putchar(ma);
		}
		_putchar('\n');
		
	}
}
