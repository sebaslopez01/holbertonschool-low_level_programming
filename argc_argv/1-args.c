#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Size of argv
 * @argv: Array with arguments
 *
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char **_argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
