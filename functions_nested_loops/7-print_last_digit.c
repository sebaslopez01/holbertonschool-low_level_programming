#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: Digit to filter
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	char l;

	l = n % 10;

	_putchar(l);

	return (l);
}
