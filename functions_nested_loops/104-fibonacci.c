#include <stdio.h>

/**
 * main - 98 fibo
 *
 * Return: 0
 */
int main(void)
{
	int i;

	unsigned long int last = 0, current = 1, temp;

	for (i = 0; i <= 93; i++)
	{
		unsigned long int res = current + last;

		printf("%lu, ", res);
		temp = current;
		current = res;
		last = temp;
	}

	unsigned long int first_half_l = last / 10000000000;
	unsigned long int second_half_l = last % 10000000000;
	unsigned long int first_half_c = current / 10000000000;
	unsigned long int second_half_c = current % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		unsigned long int res1 = first_half_l + first_half_c;
		unsigned long int res2 = second_half_l + second_half_c;

		if (res2 > 9999999999)
		{
			res1++;
			res2 %= 10000000000;
		}
		printf("%lu%lu", res1, res2);
		if (i != 98)
			printf(", ");
		first_half_l = first_half_c;
		second_half_l = second_half_c;
		first_half_c = res1;
		second_half_c = res2;
	}
	putchar('\n');
	return (0);
}
