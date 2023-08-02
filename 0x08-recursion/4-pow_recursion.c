#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion: recursive function
 *
 * @x: integer
 * @y: integer
 *
 * Description: a function that powered a number and another number
 *
 * Return: the result (success)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
