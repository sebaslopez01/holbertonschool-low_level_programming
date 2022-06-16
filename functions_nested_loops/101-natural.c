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

	for (i = 1; i < 342; i++)
	{
		int m_3 = i * 3;
		int m_5 = i * 5;

		if (m_5 < 1024)
			count += m_5;

		count += m_3;
	}

	printf("%d", count);

	return (0);
}
