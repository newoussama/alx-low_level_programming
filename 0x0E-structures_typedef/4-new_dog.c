#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function to create struct
 *
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Description: function to creat struct
 *		in another place
 * Return: (0) success or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *)malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
