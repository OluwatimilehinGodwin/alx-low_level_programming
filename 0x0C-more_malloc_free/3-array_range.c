#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: minimum value
 * @max: maximum value
 *
 * Description: a function to allocate space for array
 * Return: a pointer to array
 */
int *array_range(int min, int max)

{
int *array;
int n, i;

if (min > max)
{
	return (NULL);
}
n = (max - min + 1);
array = malloc(sizeof(int) * n);
if (array == NULL)
{
	return (NULL);
}
for (i = 0; i < n; i++)
{
	array[i] = min++;
}
return (array);
}
