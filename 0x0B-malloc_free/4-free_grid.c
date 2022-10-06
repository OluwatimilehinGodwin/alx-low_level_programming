#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry point
 * @grid: 2-d array passed
 * @height: row
 *
 * Description: a function to free a 2-d grid
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
