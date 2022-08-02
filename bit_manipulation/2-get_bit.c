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
	unsigned long int pos_binary = 1;

	if (index > 32)
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
