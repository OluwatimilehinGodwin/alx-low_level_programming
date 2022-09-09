#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print the alphabeth in small letters
 * Return: 0
 */
int main(void)
{
char m = 'a';

while (m <= 'z')
{
	putchar(m);
	m++;
}
return (0);
}
