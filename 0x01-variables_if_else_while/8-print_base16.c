#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints all the numbers of
 * base 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char y = "0";
char w = "a";

while (y <= "9")
{
	putchar(y);
	y++;
}
while (w <= "f")
{
	putchar(w);
	w++;
}
putchar("\n");
return (0);
}
