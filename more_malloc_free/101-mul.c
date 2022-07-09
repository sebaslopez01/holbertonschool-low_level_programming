#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two positive numbers
 * @argc: Size of argv
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, j, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
