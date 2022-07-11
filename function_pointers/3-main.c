#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Performs simple operations
 * @argc: Size of argv
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int n1, n2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(n1, n2));

	return (0);
}
