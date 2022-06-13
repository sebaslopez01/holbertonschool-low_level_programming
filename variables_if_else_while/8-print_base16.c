#include <stdio.h>

/**
 * main - base 16 numbers
 *
 * Return: 0 for success value
 */
int main(void)
{
	char c;
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
