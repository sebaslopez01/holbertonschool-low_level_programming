#include "search_algos.h"


/**
 * linear_search - Searches for a value in an array of integers
 * using the linear search algorithm
 * @array: Array to search in
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (value == array[i])
			return ((int)i);
	}

	return (-1);
}
