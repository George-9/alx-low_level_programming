#include "main.h"

/**
 * _calloc - allocates memory to an array
 * @nmemb: number of elements in the array
 * @size: the size of a given element of the array
 *
 * Return: pointer to the new heap of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *m;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	total_size = nmemb * size;
	m = malloc(total_size);

	if (m == NULL)
		return (NULL);

	memset(m, 0, total_size);

	return (m);
}
