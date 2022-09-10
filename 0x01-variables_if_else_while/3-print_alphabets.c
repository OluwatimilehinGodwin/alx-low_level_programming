#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the alphabet in
 * lowercase and then in uppercase, followed by a new line.
 */
int main(void)
{
char p = 'a';
char q = 'A';

while (p < 'z')
{
	putchar(p);
	p++;
}
while (q < 'Z')
{
	putchar(q);
	q++;
}
putchar('\n');
return (0);
}
