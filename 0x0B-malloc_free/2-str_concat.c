#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * str_concat: concatination function
 *
 * @s1: a string of chars
 * @s2: a string of chars
 *
 * Description: a function that concatenate two strings
 *
 * return : pointer or NULL (SUCCESS)
*/

char *str_concat(char *s1, char *s2)
{
	char *prs;
	unsigned int i, lt1, lt2, lenght;

	if (s1 == NULL)
		return ("");
	else if (s2 == NULL)
		return ("");

	lt1 = strlen(s1);
	lt2 = strlen(s2);
	lenght = lt1 + lt2;

	prs = (char *)malloc((lenght + 1) * (sizeof(char)));

	for (i = 0; i < lt1; i++)
	{
		prs[i] = s1[i];
	}
	for ( i = 0; i < lt2; i++)
	{
		prs[lt1 + i] = s2[i];
	}
	prs[lenght] = '\0';

	if (prs == NULL)
		return (NULL);

	return (prs);

}
