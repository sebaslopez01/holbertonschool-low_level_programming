#include <stdio.h>

/**
 * main - print 3
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; j <= 57; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != 7 && j != 8 && k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
