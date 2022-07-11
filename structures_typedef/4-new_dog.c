#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Return: Pointer to a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
