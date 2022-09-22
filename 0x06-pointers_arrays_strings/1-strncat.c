#include "main.h"

/**
 * _strncpy - entry point
 * @dest: active variable
 * @src: another active variable
 * @n: yet another active variable
 *
 * Description: function to append n bytes of src int dest
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int c = 0;
int c2 = 0;

while (dest[c] != '\0')
{
	c++;
}
while (c2 < n)
{
	dest[c] = src[c2];
	c2++;
}
return (dest);
}
