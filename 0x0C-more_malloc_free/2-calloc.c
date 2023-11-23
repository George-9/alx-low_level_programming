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
	void *m;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	m = malloc((nmemb * size) + 1);

	if (m == NULL)
		return (NULL);

	return (m);
}
