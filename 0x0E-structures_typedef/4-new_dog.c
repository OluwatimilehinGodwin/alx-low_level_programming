#include <stdio.h>
#include "dog.h"

/**
 * new_dog - entry point
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 *
 * Description: a function to creat a new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_struct;
int count, i, j;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
new_struct = malloc(sizeof(dog_t));
if (new_struct == NULL)
{
	return (NULL);
for(count = 0; name[i]; i++)
	;
i++;
new_struct->name = malloc(i * sizeof(char));
if (new_struct->name == NULL)
	return (NULL);
for (i = 0; i <
