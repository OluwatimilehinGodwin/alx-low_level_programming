#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - entry point
 * @argv: arrat of command line arguments
 * @argc: count of C.L. arguments
 *
 * Description: function to add arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
int i, j;
int sum = 0;

for (i = 1; i < argc;i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (isdigit(argv[i][j]) == 0)
		{
			puts("Error\n");
			return (1);
		}
	}
}
for (i = 1; i < argc; i++)
{
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
