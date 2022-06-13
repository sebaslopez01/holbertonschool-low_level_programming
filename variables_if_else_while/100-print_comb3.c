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
	int t;

	t = 0;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{		
			putchar(i);
			if (j == 49)
				putchar(j + t);
			else
				putchar(j);
			if (i == 56 && j == 57)
				break;				
			putchar(',');
			putchar(' ');
		}
		t++;
	}
	putchar('\n');

	return (0);
}
