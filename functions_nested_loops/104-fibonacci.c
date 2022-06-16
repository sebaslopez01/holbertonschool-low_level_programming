#include <stdio.h>

/**
 * main - 98 fibo
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned int long temp;

	unsigned int long last = 0;
	unsigned int long current = 1;

	for (i = 0; i < 97; i++)
	{
		unsigned int long res = current + last;

		printf("%lu", res);

		temp = current;

		current = res;

		last = temp;

		if (i != 96)
			printf(", ");
	}
	putchar('\n');

	return (0);
}
