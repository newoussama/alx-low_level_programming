#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * argstostr: function
 *
 * @ac: integer
 * @av: a pointer to a pointer
 *
 * description: a function tha print argument with the programme
 *
 * return: NULL or pointer (success)
*/

char *argstostr(int ac, char **av)
{
	int i, j, cmt = 0, np = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, np++)
		np += strlen(av[i]);

	p = (char *)malloc(sizeof(char) * np + 1);
	if (p == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmt++)
			p[cmt] = av[i][j];

		p[cmt] = '\n';
		cmt++;
	}
	p[cmt] = '\0';
	return (p);
}
