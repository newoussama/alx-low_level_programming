#include "main.h"

/**
 * main - entry point
 *
 * description:  a code print numbers from 1 to 100 anf fizz buzz between
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int ma;

	for (ma = 1; ma <= 100; ma++)
	{
		if (ma % 3 == 0 && !(ma % 5 == 0))
			printf("Fizz");
		else if (ma % 5 == 0 && !(ma % 3 == 0))
			printf("Buzz");
		else if (ma % 3 == 0 && ma % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", ma);
		if (ma != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
