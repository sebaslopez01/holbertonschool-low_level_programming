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
	int temp = size;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < temp - 1; k++)
			_putchar(' ');

		temp--;

		for (j = 0; j < size - temp; j++)
			_putchar('#');

		_putchar('\n');
	}
}
