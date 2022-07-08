#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Memory to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);

	if (!p)
	{
		p = malloc(sizeof(int));
		p[0] = 98;
		return (*p);
	}

	return (p);
}
