#include "main.h"

/**
 * _abs - Computes absolute value of integer
 * @n: Integer to compute
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -n);
	return (n);
}
