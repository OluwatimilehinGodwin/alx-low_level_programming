#include "main.h"

/*
 * is_prime_number - entry point
 * @n: active variable
 *
 * Description: a function to check if number is prime
 * Return: 0
 */
int is_prime_number(int n)
{
if (n == 1)
{
	return (0);
}
if ((n % 2) == 1 && (n % 3) > 0 && (n % 5) > 0 && (n % 9) > 0)
{
	return (1);
}
else
{
	return (0);
}
}
