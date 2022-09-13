#include "main.h"

/**
 * print_sign - entry point
 * @n: active variable
 *
 * Description: a function that prints the sign of a number
 * Return: 0
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');
		_putchar('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
return (0);
}

