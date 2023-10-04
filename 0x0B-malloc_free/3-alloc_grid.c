#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - from 70r aljenan
 *
 * @width: am ant
 *
 * @height: insan alkamal
 *
 * Return: me again
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int d, y;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (d = 0; d < height; d++)
	{
		gridout[d] = malloc(width * sizeof(int));
		if (gridout[d] == NULL)
		{
			for (d--; d >= 0; d--)
				free(gridout[d]);
			free(gridout);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
		for (y = 0; y < width; y++)
			gridout[d][y] = 0;

	return (gridout);
}
