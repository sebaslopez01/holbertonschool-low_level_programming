#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: String to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	int len = 0;

	while (1)
	{
		if (s[len] == 0)
			break;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
