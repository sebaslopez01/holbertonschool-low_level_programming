#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * @a: Matrix
 * @size: Size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	int count1 = 0;
	int count2 = 0;

	int j = 0;
	int k = size - 1;

	for (i = 0; i < size * size; i += size)
	{
		count1 += a[i + j];
		count2 += a[i + k];

		j++;
		k--;
	}

	printf("%d, %d\n", count1, count2);
}
