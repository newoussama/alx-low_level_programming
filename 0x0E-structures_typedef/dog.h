#ifndef DOG_H
#define DOG_H

/*
 * description: a struct that contain the information
 *		of specifique dog
*/


struct dog
{
	char *name; /* the name of the dog*/
	float age; /* the age of the dog*/
	char *owner; /* the owner of the dog*/
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif