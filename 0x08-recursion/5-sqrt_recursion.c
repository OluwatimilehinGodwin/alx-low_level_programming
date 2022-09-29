#include "main.h"

/**
 * _mysqrt - entry point
 * @n: entry point
 * @i: integer where square is to start
 *
 * Description: perfect square
 * Return: 0
 */
int _mysqrt(int n, int i)
{
if ((i * i) > n)
{
	return (-1);
}
if ((i * i) == n)
{
	return (i);
}
return (_mysqrt(n, (i + 1)));
}

/**
 * _sqrt_recursion - entry point
 * @n: active variable
 *
 * Description: to find square
 * Return: 0
 */
int _sqrt_recursion(int n)
{
if (n < 2)
{
	return (n);
}
return (_mysqrt(n, 2));
}
