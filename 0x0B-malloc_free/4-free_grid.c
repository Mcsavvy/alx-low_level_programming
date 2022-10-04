#include "main.h"

/**
 * free_grid - frees a 2D array previously created
 * @grid: a 2D arry
 * @height: number of rows in the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
