#include "search_algos.h"


/**
 * print_array - Prints an array of integers
 * @array: Array to print
 * @size: Size of the array
 * @start: Where to start the array
 *
 * Return: void
 */
void print_array(int *array, int size, int start)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i < size; i++)
	{
		if (i > start)
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

	print_array(array, size, 0);

	while (left <= right)
	{
		middle = (int)((left + right) / 2);
		if (array[middle] < value)
		{
			if (left != right)
				print_array(array, right, middle + 1);
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			if (left != right)
				print_array(array, middle, left);
			right = middle - 1;
		}
		else
			return (middle);
	}

	return (-1);
}
