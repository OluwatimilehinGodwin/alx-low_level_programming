#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: column of array
 * @height: row of array
 *
 * Description: function to return pointer to 2d array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
int **ar, i, j;
 
if (width == 0 || height == 0)
{
    return (NULL);
}
ar = malloc(height * sizeof(int *));
/* 
 * the above was used to allocate space for pointer to each row for
 * i.e using a pointer to the row
 */
if (ar == NULL)
{
    return (NULL);
}
for (i = 0; i < height; i++)
{
    ar[i] = malloc(width * sizeof(int));
    /* 
     * this is used to allocate space for j number of width for each height
     */
    if (ar[i] == NULL)
    {
        return (NULL);
    }
}
for (i = 0; i < height; i++)
{
    for (j = 0; j < width; j++)
    {
        ar[i][j] = 0;
    }
    /* assignment of 0 to all array values */
}
return (ar);
}
