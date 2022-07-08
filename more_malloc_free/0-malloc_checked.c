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
		exit(98);

	return (p);
}
