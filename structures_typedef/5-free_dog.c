#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: Dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
