#include "main.h"

/**
 * _isupper - entry point
 * @c: active variable
 *
 * Description: function that checks for uppercase character
 * Return: 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
	return (0);
}
