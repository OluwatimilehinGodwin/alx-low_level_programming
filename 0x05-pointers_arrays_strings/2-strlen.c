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
int count = 0;

while (*(s + count) != '\0')
{
	count++;
}
return (count);
}
