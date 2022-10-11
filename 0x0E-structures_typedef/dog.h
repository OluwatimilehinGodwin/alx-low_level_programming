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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
