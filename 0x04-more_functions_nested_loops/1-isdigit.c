#include "main.h"

/**
 * _isdigit - entry point
 * @c: active variable
 *
 * Description: function that checks for a digit (0 through 9).
 * Return: 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}