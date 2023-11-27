#include <stddef.h>
#include <stdio.h>

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - definesa dog object
 *
 * @name: the dogs name
 * @age: the dog's age
 * @owner: who owns him/her
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

void init_dog(Dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
