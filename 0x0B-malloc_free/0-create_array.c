#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: size of array to be created
 * @c: initialization character
 *
 * Description: a function to create and initialize a character
 * Return: pointer to the character or NULL
 */
char *create_array(unsigned int size, char c)
{
char *point;
unsigned int i;

if (size == 0)
{
	return (NULL);
}
point = malloc(size * sizeof(char));
if (point == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	point[i] = c;
}
return (point);
free(point);
}
