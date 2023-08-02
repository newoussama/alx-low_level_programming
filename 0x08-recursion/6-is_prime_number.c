#include "main.h"
#include <stdio.h>

/**
 * is_prime_number: recursive function
 *
 * @n: integer
 *
 * Description: a recursive function that identify
 *		prime numbers
 *
 * Return: 1 or 0 (success)
*/

int is_prime_number(int n)
{
	if (n % n == 0 || n % 1 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
