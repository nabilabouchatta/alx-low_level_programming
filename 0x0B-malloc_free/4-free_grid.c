#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: multidimensional array of integers.
 * @height: the height.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
