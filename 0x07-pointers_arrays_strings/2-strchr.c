#include "main.h"
#include <stdlib.h>

/**
 * _strchr - entry point
 * @s: source string
 * @c: character to be found
 *
 * Description: function that locates a character in a string.
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i) != '\0'; i++)
{
	if (*(s + i) == c)
	{
		return (s + i);
	}
}
return (0);
}
