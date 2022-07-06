#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Size of argv
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc <= 2 && argc >= 4)
	{
		printf("Error\n");

		return (1);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);

	printf("%d\n", n1 + n2);

	return (0);
}
