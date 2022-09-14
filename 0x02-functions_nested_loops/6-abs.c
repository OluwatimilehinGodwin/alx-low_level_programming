#include "main.h"

/**
 * _abs - entry point
 *@a: active variable
 * Description: function that computes the absolute
 * value of an integer.
 * Return: 0
 */
int _abs(int a)
{
if (a >= 0)
{
	return(a);
}
else if (a < 0)
{
	return (a * -1);
}
}
