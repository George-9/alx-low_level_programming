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
	int w, h, **n;

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
			return (NULL);
		for (w = 0; w < width; w++)
			n[h][w] = 0;
	}
	return (n);
}