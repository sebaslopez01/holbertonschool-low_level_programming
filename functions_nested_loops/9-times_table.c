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
	int next;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c < 10; c++)
		{
			res = i * c;
			next = i * (c + 1);

			if (res < 10)
			{
				_putchar('0' + res);
			}
			else
			{
				_putchar('0' + res / 10);
				_putchar('0' + res % 10);
			}

			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');

				if (next < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
