#include "dog.h"

/**
 * free_dog - frees a dog object's memory block
 * @d: the dog object
 *
 * Return: none
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
