#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - ..
 * @grid: 2D
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
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
