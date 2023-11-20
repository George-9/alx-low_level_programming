#include "main.h"

/**
 * free_grid - frees the memory used for matrix
 *
 * @grid: the matrix
 * @height: the number of rows in the matrix
 *
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
