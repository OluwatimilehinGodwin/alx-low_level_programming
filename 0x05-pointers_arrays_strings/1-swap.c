#include "main.h"

/**
 * swap_int - entry point
 * @a: active variable
 * @b: second active variable
 *
 * Description: function that swaps the values of two integers
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
