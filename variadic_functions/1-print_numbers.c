#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value;

	if (n == 0)
	{
		putchar('\n');
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);

		if (i == n - 1)
		{
			printf("%d\n", value);
			break;
		}

		if (separator != NULL)
			printf("%d%s", value, separator);
		else
			printf("%d", value);
	}

	va_end(args);
}
