#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - entry point
 * @d: pointer to structure dog
 *
 * Description: a function to print structure dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
}
