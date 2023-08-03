#include "main.h"

/**
 * pfr_chek: recursive function
 *
 * @s1: first string
 * @s2: segond string
 * @f: a conter
 * @c: another counter
 *
 * Description: function that help us to
 *		compare two strings
 * Return: 0 or 1 (success)
*/

int pdr_chk(char *s1, char *s2, int f, int c)
{
	if (s1[f] == '\0' && s2[c] == '\0')
		return (1);
	if (s1[f] == s2[c])
		return (pdr_chk(s1, s2, f + 1, c + 1));
	if (s1[f] == '\0' && s2[c] == '*')
		return (pdr_chk(s1, s2, f, c + 1) || pdr_chk(s1, s2, f + 1, c));
	return (0);
}

/**
 * wildcmp: main function
 *
 * @s1: first string
 * @s2: segand string
 *
 * Description: function to comparetwo string
 *
 * Return: 1 or 0 (success)
*/

int wildcmp(char *s1, char *s2)
{
	return (pdr_chk(s1, s2, 0, 0));
}
