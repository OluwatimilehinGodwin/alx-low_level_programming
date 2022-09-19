#include "main.h"

/**
 * _strlen - entry point
 * @s: active variable
 *
 * Description: function that returns the length of a string.
 * Return: 0
 */
int _strlen(char *s)
{
int j = 0;

if (*s[j] != '\n')
	j++;
return (j);
}
/* where j is the count per character */
