#include "dog.h"

/**
 * new_dog - creates a new dog object
 *
 * @name: the name to assign to it
 * @age: the age to assing to the dog
 * @owner: the name of the new dog's owner
 *
 * Return: a pointer to the new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
