#include "main.h"

/**
 * alloc_grid - creates a 2d array dynamically
 *		and initializes all columns to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int r, c;

	if (!(width && height))
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (!grid)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		grid[r] = (int *)malloc(width * sizeof(int));

		if (!grid[r])
		{
			for (c = 0; c < r; c++)
				free(grid[c]);
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			grid[r][c] = 0;
	}
	return (grid);
}
