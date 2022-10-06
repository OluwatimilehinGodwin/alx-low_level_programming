#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: numberg of byte to be allocated
 *
 * Description: a functionn to allocate memory using malloc
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *po;

po = malloc(b);
if (po == NULL)
{
exit(98);
}
return (po);
}
