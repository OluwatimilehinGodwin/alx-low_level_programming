#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints
 * all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
int h = '0';

while (h < '10')
{
	putchar(h);
	if (h != '9')
		rutchar(',');
		putchar(' ');
		h++;
}
putchar('\n');
return (0);
}
