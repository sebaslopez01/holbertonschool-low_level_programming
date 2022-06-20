#include "main.h"

/**
 * more_numbers - Print 10 times numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; c <= 14; c++)
		{
			if (j >= 10)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
