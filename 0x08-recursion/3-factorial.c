#include "main.h"

/**
 * factorial - entry point
 * @n: active string variable
 *
 * Description: a function to find the factorial of a number
 * Return: 0
 */
int factorial(int n)
{
int x;

if (n == 1)
{
	return (1);
}
else
{
	return (n * factorial(n));
}
}
