#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (k = size; k > 1; k--)
			_putchar(' ');

		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
