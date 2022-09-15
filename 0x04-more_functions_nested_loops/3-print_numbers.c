#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: function that prints the numbers,
 * from 0 to 9, followed by a new line
 * Return: 0
 */
void print_numbers(void)
{
int t = '0';

while (t <= '9')
{
	_putchar(t);
	t++;
}
_putchar('\n');
}
