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
	printf("%d\n", (argc - 1));
}
