#include <stdio.h>
#include "dog.h"

/**
 * print_dog - entry point
 * @d: pointer to structure dog
 *
 * Description: a function to print structure dog
 */
void print_dog(struct dog *d)
{
char n[] = "(nil)";
if (d != NULL)
{
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %s\n", n);
	}
	if (d->age < 0)
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
