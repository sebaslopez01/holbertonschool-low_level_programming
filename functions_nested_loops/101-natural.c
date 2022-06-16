#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * print_chars - chars
 * @n: Number to print
 *
 * Return: void
 */
void print_chars(int n)
{
	char nstr[20];
	int i;
	int len;

	sprintf(nstr, "%d", n);

	len = strlen(nstr);

	for (i = 0; i < len; i++)
		_putchar(nstr[i]);
}


/**
 * main - Multiples of naturals
 *
 * Return: void
 */
int main(void)
{
	int count;
	int i;

	for (i = 1; i < 1024; i++)
	{
		count += i * 3;
		count += i * 5;
	}

	printf("%d", count);

	return (0);
}
