#include "main.h"

/**
 * alloc_grid - creates 2 dimension array of integers
 *
 * @width: the number of integers in a row
 * @height: the number of rows
 *
 * Return: pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int i, w, h, **n;

	h = 0;
	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);

	for (; h < height; h++)
	{
		n[h] = malloc(sizeof(int) * width);
		if (n[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(n[i]);
			free(n);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			n[h][w] = 0;

	return (n);
}
