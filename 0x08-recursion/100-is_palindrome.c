#include "main.h"
#include <stdio.h>

/**
 * l_ind : recursive function
 *
 * @s: string
 *
 * Description: a function that count the lengnt of
 *		a string
 *
 * Return: 0 or 1 (success)
*/

int is_palindrome(char *s);
int verf(char *s, int st, int ed, int m);
int  l_ind(char *s)
{
	int j = 0;

	if (*s > '\0')
		j += l_ind(s + 1) + 1;
	return (j);
}

/**
 * verf: recursive function
 *
 * @s : string
 * @st: the start of a string
 * @ed: theend of a string
 * @m: the mode
 *
 * Description: a function that verify if thecharacters oof a string are
 *		the same
 *
 * Returnn: 0 or 1 (success)
*/

int verf(char *s, int st, int ed, int m)
{
	if ((st == ed && m != 0) || (st == ed + 1 && m == 0))
		return (1);
	else if (s[st] != s[ed])
		return (0);
	else
		return (verf(s, st + 1, ed - 1, m));
}

/**
 * is_palindrome: recursive function
 *
 * @s: string
 *
 * Description: a function that identify a palindrome
 *		string with the help of another string
 *
 * Return: 0 or 1 (success)
*/

int is_palindrome(char *s)
{
	int ed = l_ind(s);

	return (verf(s, 0, ed - 1, ed % 2));
}
