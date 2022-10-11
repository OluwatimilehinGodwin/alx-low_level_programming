#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int count, count2, i;
dog_t *new;

if (name == NULL || owner == NULL || age < 0)
	return (NULL);
new = malloc(sizeof(dog_t));
if (new == NULL)
	return (NULL);
for (count = 0; name[count]; count++)
	;
count++;
new->name = malloc(count * sizeof(char));
if (new->name == NULL)
{
	free(new);
	return (NULL);
}
for (i = 0; i < count; i++)
{
	new->name[i] = name[i];
}
new->age = age;
for (count2 = 0; owner[count2]; count2++)
	;
count2++;
new->owner = malloc(count2 * sizeof(char));
if (new->owner == NULL)
{
	free(new->name);
	free(new);
	return (NULL);
}
for (i = 0; i < count2; i++)
{
	new->owner[i] = owner[i];
}
return (new);
}
