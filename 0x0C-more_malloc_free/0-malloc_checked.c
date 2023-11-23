#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: the amount of memory to assign
 *
 * Return: pointer to the new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);
}
