#include "dog.h"

/**
 * print_dog - prints the details of a dog object
 * @d: the dog object
 *
 * Return: none
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (d == NULL)
		printf("%s", "");
	else
	{
		name = name == NULL ? "(nil)" : name;
		owner = owner == NULL ? "(nil)" : owner;
		printf("%s: %s\n%s: %f\n%s: %s\n", "Name", name, "Age", age, "Owner", owner);
	}
}

