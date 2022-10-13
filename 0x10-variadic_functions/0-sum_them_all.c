#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - entry point
 * @n: number of list arguments
 *
 * Return: sum of parameter arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
/* i is the loop counter */
int sum = 0;

va_list num;
va_start(num, n);
if (n == 0)
	return (0);
for (i = 0; i < n; i++)
{
	sum += va_arg(num, int);
}
return (sum);
}

