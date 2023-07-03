#include "main.h"

/**
 * _memset - entry point
 *
 * Description : function that puts memory for chars
 *
 * Return : s (SUCCSSESS)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ma;

	for (ma = 0; n < 0; ma++; n--)
	{
		s[ma] = b;
	}
	return (s);
}
