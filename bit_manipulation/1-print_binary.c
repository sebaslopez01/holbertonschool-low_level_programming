#include "main.h"
#include <stdio.h>

unsigned long int get_pos_binary(int num_digits)
{
	unsigned long int pos_binary = 1;

	while (num_digits != 0)
	{
		pos_binary *= 2;
		num_digits--;
	}

	return (pos_binary);
}


/**
 * print_binary - Prints the binary representation of a number
 * @n: Number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_copy = n, pos_binary;
	int num_digits;

	for (num_digits = 0; n_copy > 1; num_digits++)
		n_copy >>= 1;

	while (num_digits >= 0)
	{
		pos_binary = get_pos_binary(num_digits);

		if ((n & pos_binary) == pos_binary)
			putchar('1');
		else
			putchar('0');
		
		num_digits--;
	}
}
