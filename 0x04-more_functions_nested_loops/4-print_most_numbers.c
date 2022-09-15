#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: print the 0 to 9 number
 * exempting 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
int j = '0';

while (j <= '9')
{
	if (j != '2' || j != '4')
	{
		_putchar(j);
		j++;
	}
}
_putchar('\n');
}
