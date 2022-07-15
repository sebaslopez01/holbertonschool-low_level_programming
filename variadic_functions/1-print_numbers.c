#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String to be printed between strings
 * @n: Number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *value = NULL;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);

		if (value == NULL)
			value = "(nil)";

		if (i == n - 1)
		{
			printf("%s\n", value);
			break;
		}

		if (separator != NULL)
			printf("%s%s", value, separator);
		else
			printf("%s", value);
	}

	va_end(args);
}
