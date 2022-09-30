#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argv: arrat of command line arguments
 * @argc: count of C.L. arguments
 *
 * Description: function to print all arguments received
 * Return: 0
 */
int main(int argc, char** argv)
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
}
