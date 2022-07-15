#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int val1;
	double val2;
	char *val3 = NULL;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
				val1 = va_arg(args, int);
				printf("%d", val1);
				break;
			case 'f':
				val2 = va_arg(args, double);
				printf("%f", val2);
				break;
			case 's':
				val3 = va_arg(args, char *);
				printf("%s", val3);
				break;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	putchar('\n');

	va_end(args);
}
