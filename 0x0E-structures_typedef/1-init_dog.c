#include "dog.h"

/**
 * init_dog - initializes the dog object with data
 *
 * @d: pointer to the dog object
 * @name: name to assign to the dog
 * @age: age to assign to it
 * @owner: person's name to assing as owner
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
