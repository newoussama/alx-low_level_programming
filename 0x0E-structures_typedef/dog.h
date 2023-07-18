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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
