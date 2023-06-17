#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print last digit
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, tDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tDigit = n % 10;

	if (tDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, tDigit);
	else if (tDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, tDigit);
	else if (tDigit < 6 && tDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tDigit);
	return (0);
}
