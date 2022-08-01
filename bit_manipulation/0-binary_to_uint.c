#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String to convert to unsigned int
 *
 * Return: The converted number, or 0 if there is one or more
 * characters in the string b that is not 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j = 1, result = 0;

	if (b == NULL)
		return (0);

	for (i = _strlen(b); i > 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			result += j;
		}

		j *= 2;
	}

	return (result);
}
