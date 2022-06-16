#include <stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("0, 1, ");
	for (i = 2; i <= 50; i++)
	{
		int res = (i - 1) + (i - 2);

		printf("%d, ", res);
	}
	putchar('\n');

	return (0);
}
