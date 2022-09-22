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
int c3 = 0;

while (dest[c] != '\0')
{
	c++;
}
while (src[c3] != '\0')
{
	c3++;
}
if (n <= c3)
{
	for (c2 = 0; c2 < n; c2++)
	{
		dest[(c + c2)] = src[c2];
	}
}
else
{
	for (c2 = 0; c2 < c3; c2++)
	{
		dest[(c + c2)] = src[c2];
	}
}
return (dest);
}
