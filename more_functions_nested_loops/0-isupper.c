#include "main.h"

/**
 * _isupper - Checks uppercase character
 * @c: Character
 *
 * Return: 1 if is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 90)
		return (1);
	return (0);
}
