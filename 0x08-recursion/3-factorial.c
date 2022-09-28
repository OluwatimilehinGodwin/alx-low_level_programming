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
{
if (n == 0)
{
	return (1);
}
if (n < 0)
{
	return (-1);
}
x = (n * factorial(n - 1));
return(x);
}
}
