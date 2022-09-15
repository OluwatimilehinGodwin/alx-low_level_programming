#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Write a function that prints
 * 10 times the numbers, from 0 to 14, followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
int i = '0';
int j;

while (i <= '9')
{
	j = '0';
	while (j <= 14)
	{
		_putchar(j);
		j++;
	}
	i++;
	_putchar('\n');
}
}
