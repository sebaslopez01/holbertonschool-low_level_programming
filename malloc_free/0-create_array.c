#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Size of array to create
 * @c: Character to create the array for
 *
 * Return: A pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr = NULL;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
