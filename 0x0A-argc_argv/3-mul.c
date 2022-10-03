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
int main(int argc, char **argv)
{
int mult = 1;
int i;

if (argc < 3)
{
	puts("Error");
	return (1);
}
else
{
	for (i = 1; i < argc; i++)
	{
		mult = mult * atoi(argv[i]);
	}
	printf("%d\n", mult);
}
return (0);
}
