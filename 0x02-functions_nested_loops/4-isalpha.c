#include "main.h"

/**
 * _isalpha - entry point
 * @c: it serve as entry variable for what to be scanned
 *
 * Description: a function that checks for
 * alphabetic character
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
