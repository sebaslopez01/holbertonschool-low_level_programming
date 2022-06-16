#include <stdio.h>
#include "main.h"


/**
 * main - Multiples of naturals
 *
 * Return: void
 */
int main(void)
{
	int count;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;
	}

	printf("%d\n", count);

	return (0);
}
