#include "main.h"
#include <stdlib.h>

/**
 * free_grid - what u need
 *
 * @grid: princess or queen
 *
 * @height: prince or king
 *
 * Return: youve hear alot u never seen
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
