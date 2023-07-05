#include "main.h"

/**
 * _sqrt_recursion - entry point
 *
 * Description: a function that print the naturel square of a n
 *
 * 0n: the  int who we are serching to his naturel square
 *
 * return:
*/

int square(int n, int ma);
int _sqrt_recursion(int n)
{
	return (square(n, 1));

}

/**
 * square - find square root
 *
 * 0n: int to find a square root
 *
 * a function to do the job with or function
 *
 * return:
*/

int square(int n, int ma)
{
	if (ma * ma == n)
		return (ma);
	else if (ma * ma < n)
		return (square(n, ma + 1));
	else
		return (-1);
}
