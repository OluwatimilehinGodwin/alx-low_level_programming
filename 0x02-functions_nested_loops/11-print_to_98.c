#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: active variable
 *
 * Description: function that prints all natural
 * numbers from n to 98, followed by a new line
 * Return: 0
 */
void print_to_98(int n)
{
if (n < 98)
{
	while (n < 98)
	{
		printf("%i,  ", n);
		n++;
	}
}
else
{
	while (n > 98)
	{
		printf("%i,  ", n);
		n--;
	}
}
_putchar('\n');
}
