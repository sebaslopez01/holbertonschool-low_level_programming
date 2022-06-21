#include "main.h"

/**
 * puts2 - Print every other character
 * @str: String
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	int len = 0;

	while (str[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
}
