#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: the array passed in
 * @size: size of array passed
 * @action: function to print
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (!action || !array)
{
	return;
}
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
