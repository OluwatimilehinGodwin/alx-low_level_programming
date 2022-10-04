#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: size of array to be created
 * c: initialization character
 *
 * Description: a function to create and initialize a character
 * Return: pointer to the character or NULL
 */
char *create_array(unsigned int size, char c)
{
char *point;

if (size == 0)
{
	return (NULL);
}
point = malloc(size * sizeof(char));
point[0] = c;
if (point != NULL)
{
	return (point);
}
return (NULL);
}
