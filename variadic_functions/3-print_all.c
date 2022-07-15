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
	char val1;
	int val2;
	float val3;
	char *val4 = NULL;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				val1 = va_arg(args, char);
				printf("%c", val1);
				break;
			case 'i':
				val2 = va_arg(args, int);
				printf("%d", val2);
				break;
			case 'f':
				val3 = va_arg(args, float);
				printf("%f", val3);
				break;
			case 's':
				val4 = va_arg(args, char *);
				printf("%s", val4);
				break;
		}

		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');

	va_end(args);
}
