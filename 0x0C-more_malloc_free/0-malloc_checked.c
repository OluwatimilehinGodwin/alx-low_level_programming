#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entryb point
 * @b: numberg of byte to be allocated
 *
 * Description: a functionn to allocate memory using malloc
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *pointer;

pointer = malloc(b);
if (pointer == NULL)
{
	exit (98);
}
return (pointer);
}
