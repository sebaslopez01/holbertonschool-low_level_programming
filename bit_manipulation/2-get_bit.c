#include "main.h"


/**
 * get_bit - Gets the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: Index starting from 0 of the bit to get
 *
 * Return: The value of the bit at the index or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n_copy = n, pos_binary = 1;
	unsigned int num_digits;

	for (num_digits = 0; n_copy > 1; num_digits++)
		n_copy >>= 1;

	if (index > num_digits)
		return (-1);

	while (index != 0)
	{
		pos_binary *= 2;
		index--;
	}

	if ((n & pos_binary) == pos_binary)
		return (1);

	return (0);
}
