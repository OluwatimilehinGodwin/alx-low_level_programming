#include "main.h"

/**
 * _memset - entry point
 * @s: target pointer
 * @b: constant byte
 * @n: number of allocated byte
 *
 * Description: function that fills memory with a constant byte.
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
	*(s + i) = b;
}
return (s);
}
