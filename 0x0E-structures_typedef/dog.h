#ifndef DOG
#define DOG

#include <stdio.h>

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: dog structure header file
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
