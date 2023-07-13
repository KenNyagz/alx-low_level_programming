#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*free_grid - frees a memory block occupied by a 2d array
*@grid: a 2d array occupying memory
*@height: one dimension of the 2d array
*Return: Void
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
