#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Writes a function that prints 10
 * times the alphabet, in lowercas
 * Return: 0
 */
void print_alphabet_x10(void)
{
int a = '1';
char b;

while (a <= '10')
{
	b = 'a';
	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
}
_putchar('\n');
	
