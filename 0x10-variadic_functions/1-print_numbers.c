#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - entry point
 * @separator: number separators
 * @n: number of list arguments
 * @...: a variable of numbers to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;

va_start(print, n);

for (i = 0; i < n; i++)
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
