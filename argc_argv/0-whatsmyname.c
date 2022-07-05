#include <stdio.h>

/**
 * main - Prints its name
 * @argc: Size of argv
 * @argv: Array with arguments
 *
 * Return: 0 for success, otherwise 1
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
