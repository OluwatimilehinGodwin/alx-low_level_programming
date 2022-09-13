#include "main.h"

/**
 * main - entry point
 *
 * Description: Write a function that prints
 * the alphabet, in lowercase,
 * Return: 0
 */
void print_alphabet(void)
{
char ty = 'a';

while (ty <= 'z')
{
	_putchar(ty);
	ty++;
}
_putchar('\n');
return;
}
