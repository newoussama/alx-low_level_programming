#include "main.h"

/**
 * _pow_recursion - entry point
 *
 * 0x: intiturs to be returned
 *
 * 0y:intitures
 *
 * Description:  that returns the value of x raised to the power of y
 *
 * return: x (success)
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));

}
