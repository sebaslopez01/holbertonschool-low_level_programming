#include "dog.h"

/**
 * init_dog - Initialize a dog struct
 * @d: Dog Struct Pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
