#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion: a recursive function
 *
 * @s: string character
 *
 * Description: a function that conte a lenght of a string
 *
 * Return: lenght (success)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
