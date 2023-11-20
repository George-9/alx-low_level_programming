#include "main.h"

/**
 * create_array - allocates memory to an array
 * @size: amount of memory to allocate
 * @c: the character to allocate as the first in the array
 *
 * Return: pointer to the new heap of memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	i = 0;

	if (size <= 0)
		return (NULL);

	m = malloc(sizeof(char) * size);

	if (m == NULL)
		return (NULL);

	for (; i < size; i++)
		m[i] = c;

	return (m);
}
