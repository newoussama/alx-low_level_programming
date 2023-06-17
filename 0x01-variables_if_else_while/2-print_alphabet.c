#include <stdio.h>

/**
 * main - entry point
 *
 * Description: that code print the alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char H = 'A';

	while (H <= 'Z')
	{
	putchar(H);
	H++;
	}
	putchar ('\n');

	return (0);
}
