#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adds positive numbers
 * @argc: Size of argv
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	unsigned int i, j;
	int n;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < 48 && argv[i][j] > 57)
			{
				printf("Error\n");

				return (1);
			}
		}

		n = atoi(argv[i]);

		sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
