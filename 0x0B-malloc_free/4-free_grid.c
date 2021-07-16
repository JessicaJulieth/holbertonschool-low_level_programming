#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer
 * @height: Size Array
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
