#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: active variable
 * @n: second active variable
 *
 * Description: function that prints n elements of
 * an array of integers, followed by a new line.
 * Return: 0
 */
void print_array(int *a, int n)
{
int x = 0;

while (x < n)
{
	printf("%d, ", a[x]);
	x++;
}
_putchar('\n');
}
