#include "main.h"

/**
 * _strcpy - entry point
 * @dest: destination pointer
 * @src: source ppintet
 *
 * Description: Write a function that copies the
 * string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int w = 0;

while (*src != '\0')
{
	dest[w] = src[w];
	w++;
}
dest[w] = ('\0');
return (dest);
}
