#include "main.h"
#include <stdio.h>

/**
 * factorial: a recursive function
 *
 * @n: integer
 *
 * Description: function that cont number factorial
 *
 * Return: result (success)
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
