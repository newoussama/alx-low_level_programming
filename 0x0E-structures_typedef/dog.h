#ifndef _0_DOG_H
#define _0_DOG_H

/**
 * struct dog - dog information
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: a struct that contain information
 * of a spacefic dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
