#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argv: arrat of command line arguments
 * @argc: count of C.L. arguments
 *
 * Description: a function to multiply arguments
 * Return: 0
 */
int main(int argc, char** argv)
{
char r[] = "Error";
int mult = 1;
int i;

if (argc == 1)
{
	printf("%s\n", r);
	return (1);
}
for (i = 1; i < argc; i++)
{
	mult *= atoi(argv[i]);
}
printf("%d\n", mult);
}
