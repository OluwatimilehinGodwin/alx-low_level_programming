#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: active variable
 * @y: second active variable
 *
 * Description: a function that calculates a x to the power of y
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
return (x * _pow_recursion(x, (y - 1))); 
}
