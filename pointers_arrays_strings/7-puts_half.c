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

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
