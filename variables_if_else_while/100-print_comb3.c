#include <stdio.h>

/**
 * main - combinations 2
 *
 * Return: 0 for success value
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');

				if (i == 56 && j == 57)
					break;
			}
		}
	}
	putchar('\n');

	return (0);
}
