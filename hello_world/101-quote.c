#include <stdio.h>

/**
 * main - Print to standard error
 *
 * Return: 1 for error valu
 */
int main(void)
{
	char[] val = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", val);
	return (1);
}
