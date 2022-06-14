#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to check
 *
 * Return: 1 if n is greater than zero, 0 if is zero or -1 if is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
