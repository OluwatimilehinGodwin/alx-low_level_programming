#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - entry point
 * @nmemb: number of array
 * @size: byte per array character
 *
 * Description: a function to allocate memory for an array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int i;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
array = malloc(nmemb * size);
if (array == NULL)
{
	return (NULL);
}
for (i = 0; i < nmemb; i++)
{
	array[i] = 0;
}
return (array);
}
