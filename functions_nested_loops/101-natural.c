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
	int j;

	for (i = 1; i < 342; i++)
		count += i * 3;
	for (j = 1; j < 205; j++)
		count += j * 5;

	printf("%d", count);

	return (0);
}
