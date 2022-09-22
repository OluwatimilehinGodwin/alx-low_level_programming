#include "main.h"

/**
 * reverse_array - entry point
 * @a: active variable
 * @n: second active variable
 * 
 * Description: a function that reverses the content of an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
char bk;
int c = 0;

while (c < n/2)
{
	bk = a[c];
	a[c] = a[(n - 1 - c)];
	a[(n - 1 - c)] = bk;
	c++;
}
}
