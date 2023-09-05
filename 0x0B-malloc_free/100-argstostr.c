#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, n, f = 0, s = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			s++;
	}
	s += ac;

	str = malloc(sizeof(char) * s + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[f] = av[i][n];
			f++;
		}
		if (str[f] == '\0')
		{
			str[f++] = '\n';
		}
	}
	return (str);
}

