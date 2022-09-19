#include "main.h"

/**
 * print_rev - entry point
 * @s: active variable
 *
 * Description: a function that prints a string,
 * in reverse, followed by a new line.
 * Return: 0
 */
void print_rev(char *s)
{
int count = 0;

while (*(s + count) != '\0')
{
	count++;
}
count = count - 1;
while (count > 0)
{
	_putchar(*(s + (count)));
}
_putchar('\n');
}
