#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money
 * @argc: Size of argv
 * @argv: Array of paremeters
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int n, temp, count = 0, i = 0;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argc <= 1 || argc >= 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	temp = n;

	while (i < 5)
	{
		temp -= coins[i];

		if (temp > 0)
		{
			n = temp;
			count++;
		}
		else if (temp < 0)
		{
			temp = n;
			i++;
		}
		else
			break;
	}

	printf("%d\n", count);
	return (0);
}
