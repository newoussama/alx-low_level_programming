#include "main.h"

/**
 * factorial _ entry point
 *
 * 0s: number we need to calculate the factorial
 *
 * Description: function who print a factorial of a given number
 *
 * return:
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
