#include "main.h"

/**
 * _strncat - entry point
 * @dest: active variable
 * @src: another active variable
 * @n: yet another active variable
 *
 * Description: function to append n bytes of src int dest
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int c = 0;
int c2;

while (dest[c] != '\0')
{
	c++;
}
for (c2 = 0; c2 < n; c2++)
{
	dest[c] = src[c2];
}
return (dest);
}
