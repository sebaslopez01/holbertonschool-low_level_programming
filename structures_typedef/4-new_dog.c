#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	if (strcpy(d->name, name) == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	if (strcpy(d->owner, owner) == NULL)
	{
		free(d);
		return (NULL);
	}

	return (d);
}
