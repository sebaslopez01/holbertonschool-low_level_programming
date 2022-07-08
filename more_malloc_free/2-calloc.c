#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size : Size bytes
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	int *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(nmemb) * size);

	if (!p)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = 0;

	return ((void *)p);
}
