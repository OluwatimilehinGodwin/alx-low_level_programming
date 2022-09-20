#include "main.h"
#include <stddef.h>

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
if (dest == NULL)
{
	return NULL;
}
char *rtn = dest;
while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
*dest = ('\0');
return (*rtn);
}
