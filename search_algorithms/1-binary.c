#include "search_algos.h"


/**
 * print_array - Prints an array of integers
 * @array: Array to print
 * @size: Size of the array
 *
 * Return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}

	printf("\n");
}


/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: Array to search in
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: The index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i, middle, left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	print_array(array, size);

	while (left <= right)
	{
		middle = (int)((left + right) / 2);
		printf("Searching in array: ");
		if (array[middle] < value)
		{
			for (i = middle + 1; i < right; i++)
			{
				if (i > middle + 1)
					printf(", ");
				printf("%d", array[i]);
			}
			printf("\n");
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			for (i = left; left < middle; i++)
			{
				if (i > left)
					printf(", ");
				printf("%d", array[i]);
			}
			printf("\n");
			right = middle - 1;
		}
		else
			return (middle);
	}
	return (-1);
}
