#include "main.h"

/**
 * _strcat - entry point
 * @dest: 1st active variable
 * @src: another active variable
 *
 * Description: function that concatenates two strings
 * Return: 0;
 */
char *_strcat(char *dest, char *src)
{
int m = 0;
int p = 0;
int counter = 0;

while (*(src + m) != '\0')
{
	m++;
}
while (*(dest + p) != '\0')
{
	p++;
}
while (counter <= m)
{
	*(dest + (p + counter)) = *(src + counter);
	counter++;
}
return (dest);
}
