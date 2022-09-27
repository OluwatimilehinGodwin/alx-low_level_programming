#include "main.h"

/**
 * print_chessboard - entry point
 * @a: active variable
 *
 * Description: a function to print a chess board
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
	}
	if (j == 8)
	{
		_putchar('\n');
	}
}
}
