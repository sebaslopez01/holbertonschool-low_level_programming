#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Value to start included
 * @max: Value to end included
 *
 * Return: A pointer to a newly created array
 */
int *array_range(int min, int max)
{
	int i = 0;

	int *arr = NULL;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + 4);

	if (!arr)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
