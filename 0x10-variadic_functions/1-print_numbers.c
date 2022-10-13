#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - entry point
 * @separator: number separators
 * @n: number of list arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list print;
va_start(print, n);

if (separator == NULL)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
	}
	printf("\n");
	va_end(print);
}
else
{
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(print, int), separator);
	}
	printf("%d\n", va_arg(print, int));
	va_end(print);
}
}
