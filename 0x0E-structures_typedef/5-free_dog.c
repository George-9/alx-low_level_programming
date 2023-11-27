#include "dog.h"

/**
 * free_dog - frees a dog object's memory block
 * @d: the dog object
 *
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
