#include <stdio.h>

/**
 * main - Prints the name of the file it was compiled from
 *
 * Return: 0 for success, 1 otherwise
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
