#include "main.h"
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
<<<<<<< HEAD
void *pointer;
=======
void *po;
>>>>>>> cb4a4a05823cf277ed3518e0bcef5f28dc63867b

po = malloc(b);
if (po == NULL)
{
exit(98);
}
return (po);
}
