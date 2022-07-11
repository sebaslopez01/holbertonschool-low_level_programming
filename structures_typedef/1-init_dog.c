#include "dog.h"
#include <stdlib.h>

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
	if (d == NULL)
		d = &(struct dog n);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
