#include "main.h"


/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Value to set the bit
 * @index: Index starting from 0 of the bit to set
 *
 * Return: 1 if it succeded, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos_binary = 1;

	if (index > 32)
		return (-1);

	while (index != 0)
	{
		pos_binary *= 2;
		index--;
	}

	*n &= pos_binary;

	return (1);
}
