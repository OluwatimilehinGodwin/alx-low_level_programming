#include "main.h"

/**
 * _islower - entry point
 * @c: its the entry variable for alphabeth to be scanned
 *
 * Description: a function that checks for lowercase character
 * Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
