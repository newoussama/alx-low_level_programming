#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of the array
 * @c: char to assign to the array
 * Description: create array of size size and assign a specific char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *tyi;
	unsigned int i;

	tyi = malloc(sizeof(char) * size);
	if (size == 0 || tyi == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tyi[i] = c;
	return (tyi);
}

