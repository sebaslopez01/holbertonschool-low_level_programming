#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array to execute the function
 * @size: Size of the array
 * @action: Function to execute in each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
