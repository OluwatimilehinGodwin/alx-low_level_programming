#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
if (n == 0)
	return;
for (i =0; i < n; i++)
{
	printf("%d", va_arg(print, int));
	if (separator != NULL && i < (n - 1))
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(print);
}
