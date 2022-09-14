#include "main.h"

/**
 * print_last_digit
 * @d: active variable
 *
 * Description: a function that prints the last digit
 * of a number
 * Return: 0
 */
int print_last_digit(int d)
{
int last_digits = d % 10;
	
if (d < 0)
{
	d = d * -1;
}
	_putchar(last_digits);
return (last_digits);
}
