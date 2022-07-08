#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size : Size bytes
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (!p)
		return (NULL);

	memset(p, 0, size * nmemb);

	return (p);
}
