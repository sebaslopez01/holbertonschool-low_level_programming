#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: 0 for success value
 */
int main(void)
{
	char c;

	c = 'a';

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' || c != 'e')
			putchar(c);
	putchar('\n');

	return (0);
}

