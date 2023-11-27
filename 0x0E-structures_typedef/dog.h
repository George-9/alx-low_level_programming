#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>


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
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
