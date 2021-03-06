#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chars - Prints characters needed
 * @n: Number to print
 *
 * Return: void
 */
void print_chars(int n)
{
	char nstr[20];
	int i;
	int len;

	sprintf(nstr, "%d", n);

	len = strlen(nstr);

	for (i = 0; i < len; i++)
		_putchar(nstr[i]);
}


/**
 * print_times_table - Prints the n times table
 * @n: Number of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;
	int next;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			res = i * j;
			next = i * (j + 1);

			print_chars(res);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');

				if (next < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (next < 100)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
