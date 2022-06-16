#include <stdio.h>

/**
 * main - Sum Fibo
 *
 * Return: 0
 */
int main(void)
{
	int i;

	int count = 0;
	int l[34] = { 0, 1 };

	for (i = 2; i <= 33; i++)
	{
		int res = l[i - 1] + l[i - 2];

		l[i] = res;

		if (res % 2 == 0)
			count += res;
	}

	printf("%d\n", count);

	return (0);
}
