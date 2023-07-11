#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wrdnt - count the number of letter
 *
 * @m: string
 *
 * Description: a function to help us in our function
 *
 * Return: variable
*/

int wrdnt(char *m)
{
	int r, f = 0;

	for (r = 0; m[r]; r++)
	{
		if (m[r] == ' ')
		{
			if (m[r + 1] != ' ' && m[r + 1] != '\0')
				f++;
		}
		else if (r == 0)
			f++;
	}
	f++;
	return (f);
}

/**
 * strtow - split string to words
 *
 * Description: function that splits a string into words
 *
 * @str: char
 *
 * Return: always 0 (success)
*/

char **strtow(char *str)
{
	int a, b, c, d, t = 0, wq = 0;
	char **m;

	if (str == NULL || *str == '\0')
		return (NULL);
	t = wrdnt(str);
	if (t == 1)
		return (NULL);
	m = (char **)malloc(t * sizeof(char *));
	if (m == NULL)
		return (NULL);
	m[t + 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a + 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			m[wq] = (char *)malloc(b * sizeof(char));
			b--;
			if (m[wq] == NULL)
			{
				for (c = 0; c < wq; c++)
					free(m[c]);
				free(m[a - 1]);
				free(m);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				m[wq][d] = str[a + 1];
			m[wq][d] = '\0';
			wq++;
			a += b;
		}
		else
			a++;
	}
	return (m);
}
