#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - copy of the string given
 * @width: pointer
 * @height:  poinet
 * Return: pointer to a 2 dimensional array of integers
 **/
int **alloc_grid(int width, int height)
{
	int y, z;
	int **x = 0;

	if (width <= 0 || height <= 0)
		return (0);
	x = (int **)malloc(height * sizeof(int *));
	if (!x)
		return (0);
	for (y = 0; y < height; y++)
	{
		x[y] = (int *)malloc(width * sizeof(int));
		if (!x[y])
		{
			free(x);
			for (z = 0; z <= y; z++)
			{
				free(x[z]);
			}
			return (0);
		}
		for (z = 0; z < width; z++)
		{
			x[y][z] = 0;
		}
	}
	return (x);
}
