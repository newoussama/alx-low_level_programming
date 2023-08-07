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
	if (size == 0)
		return (NULL);
	char *str;

	str = (char *)malloc(size * sizeof(char));

	str[0] = c;

	if (str == NULL)
		return (NULL);
	else
		return (str);
}
