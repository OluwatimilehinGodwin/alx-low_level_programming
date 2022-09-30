#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: count of C.L. argument
 * @argv: pointer to C.L. array of argument
 *
 * Description: a function to print the name of the file
 * Return: 0
 */
int main(int argc, char** argv)
{
	printf("%s\n", argv[(argc - argc)]);
	return (0);
}
