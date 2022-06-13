#include <stdio.h>

/**
 * main - alphabet
 *
 * Return: 0 for success value
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
