#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: String
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	int len = 0;

	while (str[len])
		len++;

	if (len / 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;

	for (; i < len; i++)
		_putchar(str[i + 1]);
	_putchar('\n');
}
