#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: Number of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		_putchar('\n');
		return;
	}

	int i;
	int j;
	int res;
	int next;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			res = i * j;
			next = i * (j + 1);

			print_chars('0' + res);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');

				if (n >= 10 && next < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (n < 10 && next < 10)
					_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
