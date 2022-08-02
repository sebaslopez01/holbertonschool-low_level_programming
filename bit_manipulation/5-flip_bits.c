#include "main.h"


/**
 * flip_bits - Get the number of bits you would need to flip to get from
 * one number to another
 * @n: Number to flip
 * @m: Number to convert
 *
 * Return: Number of bits necessary to flip to another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int new_num = n ^ m;

	for (count = 0; new_num != 0; new_num >>= 1)
	{
		if (new_num & 1)
			count++;
	}

	return (count);
}
