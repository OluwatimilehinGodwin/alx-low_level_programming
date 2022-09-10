#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a code to print the lower case
 * letters in a reverse order
 * Return: 0
 */
int main(void)
{
char i = 'z';

while (i >= 'a')
{
	putchar(i);
	i--;
}
putchar('\n');
return (0);
}
