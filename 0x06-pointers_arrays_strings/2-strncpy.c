#include "main.h"

/**
 * _strncpy - entry point
 * @n: active variable
 * @src: 2nd active variable
 * @dest: 3rd active variable
 *
 * Description: function that copies a string.
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n);
{
int c = 0;

while (*(src + c) < n || *(src + c) != '\0')
{
	*(dest + c) = *(src + c);
	c++;
}
*(dest + c) = '\0';
return (dest);
}
