#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array
 * @array: Array to search
 * @size: Size of the array
 * @cmp: Function to be used to compare values
 *
 * Return: Index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
