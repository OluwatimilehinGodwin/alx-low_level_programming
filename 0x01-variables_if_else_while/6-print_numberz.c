#include <stdio.h>

/**
 * main - entry point
 *
 * Discription: Write a program that prints all
 * single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
int i = '0';

while (i <'10')
{
	putchar(i);
	i++;
}
return (0);
}
