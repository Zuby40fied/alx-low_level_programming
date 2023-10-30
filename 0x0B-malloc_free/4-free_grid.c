#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimentional array
 * @grid: 2 dimentional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
