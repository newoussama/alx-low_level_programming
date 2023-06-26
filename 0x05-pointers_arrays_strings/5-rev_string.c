#include "main.h"

/**
 * rev-string - entry point
 *
 * Description: print a revers string
 *
 * return: always 0 (success)
*/

void rev_string(char *s)
{
	int m, l;
	char sa;

	for (m = 0; s[m] != '\0'; ++m)
		;
	for (l = 0; l < m / 2; l++)
	{
		sa = s[i];
		s[i] = s[m - 1 - l];
		s[m - 1 - l] = sa;
	}

}
