#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - entry point
 * @separator: string separator
 * @n: number of strings to be passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *ptr;

va_list string;
va_start(string, n);

for (i = 0; i < n; i++)
{
	ptr = va_arg(string, char *);
	if (ptr == NULL)
		printf("(nil)");
	else
		printf("%s", ptr);
	if (i < (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(string);
}
