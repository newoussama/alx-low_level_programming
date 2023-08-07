#include<stdio.h>
#include<stdlib.h>

/**
 * creat_array: fuction that creat array
 *
 * @size: the size of the array
 * @c: chars
 *
 * Description: a function that allocate array for char
 *
 * return: 0 (fail) , 1 (success)
*/

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (NULL);

	unsigned int i;

	str = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	if (str == NULL)
		return (NULL);
	else
		return (str);
}
