#include <stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	long l[52] = { 0, 1 };

	for (i = 2; i <= 51; i++)
	{
		long res = l[i - 1] + l[i - 2];

		l[i] = res;

		printf("%ld", res);

		if (i != 51)
			printf(", ");
	}
	putchar('\n');

	return (0);
}
