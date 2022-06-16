#include <stdio.h>

/**
 * main - 98 fibo
 *
 * Return: 0
 */
int main(void)
{
	int i;

	unsigned long int temp;

	unsigned long int last = 0;
	unsigned long int current = 1;

	for (i = 0; i < 98; i++)
	{
		unsigned long int res = current + last;

		printf("%lu", res);

		temp = current;

		current = res;

		last = temp;

		if (i != 97)
			printf(", ");
	}
	putchar('\n');

	return (0);
}
