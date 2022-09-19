#include "main.h"

/**
 * _puts - main entry point
 * @str: active variable
 *
 * Description: function that prints a string, followed
 * by a new line, to stdout
 * Return: 0
 */
void _puts(char *str)
{
	_putchar(*str);
	_putchar('\n');
}
