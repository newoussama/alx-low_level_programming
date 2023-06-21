#include<stdio.h>

/**
 * main - entry point
 *
 * Description: run code fo 3 numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
        int m = 0;
        int m1, m2;

        while (m <= 9)
        {
                m1 = 0;
                while (m1 <= 9)
                {
                        m2 = 0;
                        while (m2 <= 9)
                        {
                                if (m != m1 &&
                                m < m1 &&
                                m1 != m2 &&
                                m1 < m2)
                                {
                                        putchar (m + 48);
                                        putchar (m1 + 48);
                                        putchar (m2 + 48);

                                        if (m + m1 + m2 != 24)
                                        {
                                                putchar (',');
                                                putchar (' ');
                                        }
					                              }
                                m2++;
                        }
                        m1++;
                }
                m++;
        }
        putchar ('\n');

        return (0);
}
                                                                                                                                   48,1          Bot
