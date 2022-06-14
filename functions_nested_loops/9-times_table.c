#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int c;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 10; c++)
		{
			res = i * c;

			if (res < 10)
			{
				_putchar('0' + res);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
