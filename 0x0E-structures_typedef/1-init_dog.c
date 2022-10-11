#include "dog.h"
#include <stdio.h>

/**
 * init_dog - entry point
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 *
 * Description: function to initialize the dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
