#include "main.h"

/**
 * _memcpy - entry point
 * @dest: destination pointer
 * @src: source file
 * @n: number of bytes to copy
 *
 * Description: function that copies memory area.
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

if (dest == NULL)
{
	return (NULL);
}
for (i = 0; i < n; i++)
{
	*(dest + i) = *(src + i);
}
return (dest);
}
