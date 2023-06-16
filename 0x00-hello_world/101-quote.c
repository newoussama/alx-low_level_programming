#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: A C programme who put characters
 *
 * Return: 1 (success)
*/
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1,quot,59);
	return (1);
}
