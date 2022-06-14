#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_chars - Prints characters needed
 * @n: Number to print
 *
 * Return: void
 */
void print_chars(int n)
{
	char nstr[20];
	int i;

	sprintf(nstr, "%d", n);

	int len = strlen(nstr);

	for (i = 0; i < len; i++)
	{
		_putchar(nstr[i]);
	}

	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}


/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: First number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			print_chars(n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			print_chars(n);
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
