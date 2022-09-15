#include "main.h"

/**
 * print_line - entry point
 * @n: active variable
 *
 * Description: function that draws a straight
 * line in the terminal.
 * Return: nothing
 */
void print_line(int n)
{
if (n > '0')
{
	while (n > '0')
	{
		_putchar('_');
		n--;
	}
	_putchar('\\n');
}
else
{
	_putchar('\\n');
}
_putchar('\n');
}
