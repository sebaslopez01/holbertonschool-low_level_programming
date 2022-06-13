#include <stdio.h>

/**
 * main - Print alphabet upper
 *
 * Return: 0 for success value
 */
int main(void)
{
	char c;
	char u;

	for (c = 'a'; c <= 'z'; c++)
        	putchar(c);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');

	return (0);
}

