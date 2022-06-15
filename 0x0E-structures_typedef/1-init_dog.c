/**
 * init_dog - a function that sets dog properties to an actual dog object
 * @d: dog object to initialize
 * @name: the name to assign to the object
 * @age: the dogs age
 * @owner: the owners name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age
	d->owner = owner
}
