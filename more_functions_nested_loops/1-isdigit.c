#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: A digit from 0 to 9
 *
 * Return: 1 for a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
