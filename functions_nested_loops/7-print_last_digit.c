#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: Digit to filter
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;

	_putchar('0' + l);

	return (l);
}
