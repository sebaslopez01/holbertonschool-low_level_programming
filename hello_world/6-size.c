#include <stdio.h>

/**
 * main - Prints the size of various types
 *
 * Return: 0 for success value
 */
int main(void)
{
	char i;
	int d;
	long int a;
	long long int b;
	float r;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(r));
	return (0);
}
