#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: active variable
 *
 * Description: a function to reverse and print a string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (s[0] == '\0')
{
	return;
}
else
{
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
}
