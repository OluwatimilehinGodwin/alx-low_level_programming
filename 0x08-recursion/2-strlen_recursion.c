#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: active pointer variable
 *
 * Description: a function to count number of strings
 * Return: count
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s == '\0')
{
	return (i);
}
else
{
	i++;
	_strlen_recursion(s + 1);
}
return (0);
}
