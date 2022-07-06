#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Size of argv
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int n = atoi(argv[i]);

		if (n == 0)
		{
			printf("Error\n");

			return (1);
		}

		sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
