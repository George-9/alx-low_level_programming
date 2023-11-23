#include "main.h"

/**
 * array_range - creates an array of numbers between a given range
 *
 * @min: smallest number, the start
 * @max: largest number, the last
 *
 * Return: pointer to the newly formed array
 */
int *array_range(int min, int max)
{
	int *a, i, l, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);
	for (i = 0, l = min; l <= max; i++, l++)
		a[i] = l;

	return (a);
}
