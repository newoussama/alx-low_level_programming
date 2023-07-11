#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find a lenght of string
 *
 * @s: string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
	;
	return (sz);
}
/**
 * argstostr - concatenates all the arguments of your program
 *
 * Description: function that concatenates all the arguments of your program
 *
 * @ac: int
 * @av: pointer of a pointer
 *
 * Return: always 0 (success)
*/

char *argstostr(int ac, char **av)
{
	int R = 0, ty = 0, Z = 0, cpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; R < ac; R++, ty++)
		ty += _strlen(av[R]);

	s = malloc(sizeof(char) * ty + 1);
	if (s == 0)
		return (NULL);

	for (R = 0; R < ac; R++)
	{
		for (Z = 0; av[R][Z] != '\0'; Z++, cpt++)
			s[cpt] = av[R][Z];

		s[cpt] = '\n';
		cpt++;
	}
	s[cpt] = '\0';
	return (s);
}
