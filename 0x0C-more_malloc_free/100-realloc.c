#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - entry point
 * @old_size: old size
 * @new_size: new size to be implemented
 * @ptr: old pointer
 *
 * Description: a function to reallocate a new size of memory to an old pointer
 * Return: a pointer to n==the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *new_ptr;
int *cpy, *mem;
unsigned int i;

if (new_size == old_size)
{
	return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (ptr == NULL)
{
	cpy = malloc(new_size);
	return (cpy);
	free(cpy);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
	return (NULL);
}
mem = ptr;
for (i = 0; i < (new_size || old_size); i++)
{
	new_ptr[i] = mem[i];
}
return (new_ptr);
free(new_ptr);
}
