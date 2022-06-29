#include <string.h>
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i;
	int len;
	char str[20];

	sprintf(str, "%d", n);

	len = strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
