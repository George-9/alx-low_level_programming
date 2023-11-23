#include "main.h"

/**
 * _realloc - reallocates memory of a memory block
 *
 * @ptr: the pointer
 * @old_size: the initial size of memory block
 * @new_size: the new size of the memory block
 *
 * Return: pointer to the resized memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int cp_size, l;
	void *n_p;

	if (ptr == NULL)
	{
		n_p = malloc(new_size);
		if (n_p == NULL)
			return (NULL);
		return (n_p);
	}

	if (new_size == old_size)
		return (ptr);

	n_p = malloc(new_size);
	if (n_p == NULL)
		return (NULL);

	l = sizeof(ptr);
	cp_size = new_size < l ? new_size : l;
	memcpy(ptr, n_p, cp_size);

	free(ptr);
	return (n_p);
}
