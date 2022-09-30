#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argv: arrat of command line arguments
 * @argc: count of C.L. arguments
 *
 * Description: function to print number of argument aside name of file
 * Return: 0
 */
int main(int argc, char** argv)
{
int i = 0;

if (argc == 1)
{
	printf("%d\n", i);
	return (0);
}
while (argv[i] != NULL)
{
	i++;
}
printf("%d\n", (i - 1));
}
