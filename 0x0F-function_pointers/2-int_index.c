#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: array to be compared
 * @size: number of array elements
 * @cmp: pointer to the function to  be used to compare values
 *
 * Return: -1 for failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (!array || size <= 0 || !cmp)
	return (-1);
for (i = 0; i < size; i++)
{
	cmp(array[i]);
	if (cmp(array[i]) != 0)
	{
		return (i);
	}
}
return (-1);
}
