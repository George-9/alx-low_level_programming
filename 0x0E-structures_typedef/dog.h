#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog (a small dog structure)
 * @name: (first member) name of the dog
 * @age: (second member) age of the dog
 * @owner: (third member) name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
