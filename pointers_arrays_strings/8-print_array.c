#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array
 * @n: Numbers of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}