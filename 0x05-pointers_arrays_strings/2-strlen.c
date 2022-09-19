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
char p = s[0];
char q = s[-1];
int count = '0';

while (p < q)
{
	count++;
}
return (count);
}
