#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
int i;
int sum = 0;
char str[] = "Error";

if (argc > 2)
{
	for (i = 0; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", str);
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
}
else if (argc == 1)
{
	printf("%d\n", sum);
}
else if (argc == 2)
{
	printf("%d\n", atoi(argv[1]));
}
else
{
	printf("%s\n", str);
	return (1);
}
return (0);
}
