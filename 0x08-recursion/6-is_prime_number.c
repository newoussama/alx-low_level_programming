#include "main.h"

/**
 * _prime_number - entry point
 *
 * 0n: a intiture to verify his nature
 *
 * Description:function that return 1 if its a prime numbere
 *
 * return: 1 or 0 (success)
*/

int prime_num(int n, int ta);
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
/**
 * prime_num - entry point
 *
 * 0n: intiture to verify if its a prime numbers
 *
 * Description: a function that destinge the prime numbers
 *
 * return: 1 or 0 (success)
*/

int prime_num(int n, int ta)
{
	if (ta >= n && n > 1)
		return (1);
	else if (n % ta == 0 || n <= 1)
	       return (0);
	else
		return (prime_num(n, ta + 1));
}
