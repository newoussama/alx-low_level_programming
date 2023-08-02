#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion: recursive function
 *
 * @n: integer
 *
 * Description: a function that give a natural square
 *		rout of a number
 * 
 * Return: result (success)
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n + _sqrt_recursion(n - 1) + n - 1);
	}
}
