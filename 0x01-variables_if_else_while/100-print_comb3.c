#include <stdio.h>

/**
 * main - entry point
 *
 * Description: code that print 2digits
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int m = 0, m1;

	while (m <= 9)
	{
		m1 = 0;
		while (m1 <= 9)
		{
			if (m != m1 && m < m1)
			{
				putchar (m + 48);
				putchar (m1 + 48);

				if (m + m1 != 17)
				{
					putchar (',');
					putchar(' ');
				}
			}
			m1++;
		}
		m++;
	}
	putchar('\n');

	return (0);
}
