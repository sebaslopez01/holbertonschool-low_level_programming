#include "main.h"


/**
 * calc_val - helper function
 * @n: number
 *
 * Return: void
 */
void calc_val(int n)
{
	int i;

	if (n > 0)
	{
		i = n % 10;
		n /= 10;

		calc_val(n);
		_putchar('0' + i);
	}
	else if (n < 0)
	{
		n *= -1;
		calc_val(n);
	}
}


/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: First number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			calc_val(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			calc_val(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
}
