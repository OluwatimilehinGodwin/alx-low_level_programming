#include <stdio.h>

/**
 * main - entry point
 *
 * Desceiption: Print all the letters except q and e
 * Return: 0
 */
int main(void)
{
char t;

while (t = 'a' ; t <= 'z' ; t++)
{
if (t != 'e' && t != 'q')
{
	putchar(t);
}
}
putchar('\n');
return (0);
}
